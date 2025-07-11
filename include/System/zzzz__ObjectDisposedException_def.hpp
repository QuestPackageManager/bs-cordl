#pragma once
// IWYU pragma private; include "System/ObjectDisposedException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ObjectDisposedException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class ObjectDisposedException;
}
// Write type traits
MARK_REF_PTR_T(::System::ObjectDisposedException);
// Dependencies System.InvalidOperationException
namespace System {
// Is value type: false
// CS Name: System.ObjectDisposedException
class CORDL_TYPE ObjectDisposedException : public ::System::InvalidOperationException {
public:
  // Declarations
  __declspec(property(get = get_Message)) ::StringW Message;

  __declspec(property(get = get_ObjectName)) ::StringW ObjectName;

  /// @brief Field _objectName, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__objectName, put = __cordl_internal_set__objectName)) ::StringW _objectName;

  /// @brief Method GetObjectData, addr 0x3df9f74, size 0x108, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::ObjectDisposedException* New_ctor();

  static inline ::System::ObjectDisposedException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::ObjectDisposedException* New_ctor(::StringW objectName);

  static inline ::System::ObjectDisposedException* New_ctor(::StringW objectName, ::StringW message);

  constexpr ::StringW const& __cordl_internal_get__objectName() const;

  constexpr ::StringW& __cordl_internal_get__objectName();

  constexpr void __cordl_internal_set__objectName(::StringW value);

  /// @brief Method .ctor, addr 0x3df9de8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3df9eec, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3df9e80, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW objectName);

  /// @brief Method .ctor, addr 0x3df9e48, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW objectName, ::StringW message);

  /// @brief Method get_Message, addr 0x3dfa148, size 0xd4, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_ObjectName, addr 0x3dfa07c, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_ObjectName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectDisposedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectDisposedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectDisposedException(ObjectDisposedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectDisposedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectDisposedException(ObjectDisposedException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2452 };

  /// @brief Field _objectName, offset: 0x90, size: 0x8, def value: None
  ::StringW ____objectName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ObjectDisposedException, ____objectName) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ObjectDisposedException, 0x98>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ObjectDisposedException);
DEFINE_IL2CPP_ARG_TYPE(::System::ObjectDisposedException*, "System", "ObjectDisposedException");
