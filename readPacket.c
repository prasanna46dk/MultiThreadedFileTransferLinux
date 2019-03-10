fileDataPacket readPacket (fileDataPacket emptyPacket, fileObject) {
    if (buf != fileObject.read() not empty)
    {
        emptyPacket.fileName = fileObject->name;
        emptyPacket.fileSize = fileObkect->size;
        emptyPacket.byteOfffset = fileObject.SEEK_CUR;
        emptyPacket.data = buf;
    }
    return emptyPacket;
}
