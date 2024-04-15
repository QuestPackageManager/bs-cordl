#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RemotingSurrogate)
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
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
// Type: System.Runtime.Remoting.Messaging::RemotingSurrogate
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::RemotingSurrogate*
class CORDL_TYPE RemotingSurrogate : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializationSurrogate"
  constexpr operator ::System::Runtime::Serialization::ISerializationSurrogate*() noexcept;

  /// @brief Method GetObjectData, addr 0x2735054, size 0x118, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc);

  static inline ::System::Runtime::Remoting::Messaging::RemotingSurrogate* New_ctor();

  /// @brief Method SetObjectData, addr 0x273516c, size 0x40, virtual true, abstract: false, final false
  inline ::System::Object* SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc,
                                         ::System::Runtime::Serialization::ISurrogateSelector* selector);

  /// @brief Method .ctor, addr 0x27351ac, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::RemotingSurrogate, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::RemotingSurrogate);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::RemotingSurrogate*, "System.Runtime.Remoting.Messaging", "RemotingSurrogate");
