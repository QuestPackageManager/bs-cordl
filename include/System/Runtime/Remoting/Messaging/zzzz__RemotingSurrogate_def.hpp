#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/RemotingSurrogate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RemotingSurrogate)
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class RemotingSurrogate;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::RemotingSurrogate);
// Dependencies System.Object, System.Runtime.Serialization.ISerializationSurrogate
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.RemotingSurrogate
class CORDL_TYPE RemotingSurrogate : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializationSurrogate"
  constexpr operator ::System::Runtime::Serialization::ISerializationSurrogate*() noexcept;

  /// @brief Method GetObjectData, addr 0x3cf1be0, size 0x110, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc);

  static inline ::System::Runtime::Remoting::Messaging::RemotingSurrogate* New_ctor();

  /// @brief Method SetObjectData, addr 0x3cf1cf0, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc,
                                         ::System::Runtime::Serialization::ISurrogateSelector* selector);

  /// @brief Method .ctor, addr 0x3cf1d28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializationSurrogate"
  constexpr ::System::Runtime::Serialization::ISerializationSurrogate* i___System__Runtime__Serialization__ISerializationSurrogate() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemotingSurrogate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemotingSurrogate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemotingSurrogate(RemotingSurrogate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemotingSurrogate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemotingSurrogate(RemotingSurrogate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3182 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::RemotingSurrogate, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::RemotingSurrogate);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::RemotingSurrogate*, "System.Runtime.Remoting.Messaging", "RemotingSurrogate");
