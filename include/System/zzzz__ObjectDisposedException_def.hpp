#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ObjectDisposedException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class ObjectDisposedException;
}
// Write type traits
MARK_REF_PTR_T(::System::ObjectDisposedException);
// Type: System::ObjectDisposedException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2427))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2453))
// CS Name: ::System::ObjectDisposedException*
class CORDL_TYPE ObjectDisposedException : public ::System::InvalidOperationException {
public:
  // Declarations
  /// @brief Field _objectName, offset 0x90, size 0x8
  __declspec(property(get = __get__objectName, put = __set__objectName))::StringW _objectName;

  __declspec(property(get = get_Message))::StringW Message;

  __declspec(property(get = get_ObjectName))::StringW ObjectName;

  constexpr ::StringW& __get__objectName();

  constexpr ::StringW const& __get__objectName() const;

  constexpr void __set__objectName(::StringW value);

  static inline ::System::ObjectDisposedException* New_ctor();

  /// @brief Method .ctor, addr 0x25bda50, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::ObjectDisposedException* New_ctor(::StringW objectName);

  /// @brief Method .ctor, addr 0x25bdae8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW objectName);

  static inline ::System::ObjectDisposedException* New_ctor(::StringW objectName, ::StringW message);

  /// @brief Method .ctor, addr 0x25bdab0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW objectName, ::StringW message);

  static inline ::System::ObjectDisposedException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x25bdb54, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetObjectData, addr 0x25bdbdc, size 0x108, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Message, addr 0x25bddcc, size 0xd4, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_ObjectName, addr 0x25bdce4, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_ObjectName();

  // Ctor Parameters [CppParam { name: "", ty: "ObjectDisposedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectDisposedException(ObjectDisposedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectDisposedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectDisposedException(ObjectDisposedException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectDisposedException();

public:
  /// @brief Field _objectName, offset: 0x90, size: 0x8, def value: None
  ::StringW ____objectName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ObjectDisposedException, 0x98>, "Size mismatch!");

static_assert(offsetof(::System::ObjectDisposedException, ____objectName) == 0x90, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::ObjectDisposedException);
DEFINE_IL2CPP_ARG_TYPE(::System::ObjectDisposedException*, "System", "ObjectDisposedException");
