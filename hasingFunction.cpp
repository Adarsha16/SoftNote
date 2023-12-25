#include "hashingFunction.h"
#include <QCryptographicHash>

QString hashPassword(const QString &password) {
    QByteArray hashedData = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    return QString(hashedData.toHex());
}
