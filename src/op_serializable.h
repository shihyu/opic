#ifndef OP_SERIALIZABLE_H

#include "op_macros.h"
#include "op_trait.h"
#include "pm_memory_manager.h"

OP_BEGIN_DECLS

#define OPSerializable_OP_METHODS serde_serialize, serde_deserialize
OP_DECLARE_METHOD(serde_serialize,   void, OPObject* obj, PMMemoryManager* ctx);
OP_DECLARE_METHOD(serde_deserialize, void, OPObject* obj, PMMemoryManager* ctx);

OP_DECLARE_TYPECLASS(OPSerializable);

OP_END_DECLS

#endif /* OP_SERIALIZABLE_H */
