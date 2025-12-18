#pragma once
// IWYU pragma private; include "System/TypeLoadException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeLoadException)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class TypeLoadException;
}
// Write type traits
MARK_REF_PTR_T(::System::TypeLoadException);
// Dependencies System.SystemException
namespace System {
// Is value type: false
// CS Name: System.TypeLoadException
class CORDL_TYPE TypeLoadException : public ::System::SystemException {
public:
  // Declarations
  /// @brief Field AssemblyName, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_AssemblyName, put = __cordl_internal_set_AssemblyName)) ::StringW AssemblyName;

  /// @brief Field ClassName, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_ClassName, put = __cordl_internal_set_ClassName)) ::StringW ClassName;

  __declspec(property(get = get_Message)) ::StringW Message;

  /// @brief Field MessageArg, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_MessageArg, put = __cordl_internal_set_MessageArg)) ::StringW MessageArg;

  /// @brief Field ResourceId, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_ResourceId, put = __cordl_internal_set_ResourceId)) int32_t ResourceId;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method GetObjectData, addr 0x5adabd8, size 0x1bc, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::TypeLoadException* New_ctor();

  static inline ::System::TypeLoadException* New_ctor(::StringW className, ::StringW assemblyName);

  static inline ::System::TypeLoadException* New_ctor(::StringW className, ::StringW assemblyName, ::StringW messageArg, int32_t resourceId);

  static inline ::System::TypeLoadException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::TypeLoadException* New_ctor(::StringW message);

  /// @brief Method SetMessageField, addr 0x5ada8a8, size 0x134, virtual false, abstract: false, final false
  inline void SetMessageField();

  constexpr ::StringW const& __cordl_internal_get_AssemblyName() const;

  constexpr ::StringW& __cordl_internal_get_AssemblyName();

  constexpr ::StringW const& __cordl_internal_get_ClassName() const;

  constexpr ::StringW& __cordl_internal_get_ClassName();

  constexpr ::StringW const& __cordl_internal_get_MessageArg() const;

  constexpr ::StringW& __cordl_internal_get_MessageArg();

  constexpr int32_t const& __cordl_internal_get_ResourceId() const;

  constexpr int32_t& __cordl_internal_get_ResourceId();

  constexpr void __cordl_internal_set_AssemblyName(::StringW value);

  constexpr void __cordl_internal_set_ClassName(::StringW value);

  constexpr void __cordl_internal_set_MessageArg(::StringW value);

  constexpr void __cordl_internal_set_ResourceId(int32_t value);

  /// @brief Method .ctor, addr 0x5ada80c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5ada9dc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::StringW className, ::StringW assemblyName);

  /// @brief Method .ctor, addr 0x5adaa24, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::StringW className, ::StringW assemblyName, ::StringW messageArg, int32_t resourceId);

  /// @brief Method .ctor, addr 0x5adaa7c, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5ada86c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method get_Message, addr 0x5ada890, size 0x18, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeLoadException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeLoadException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeLoadException(TypeLoadException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeLoadException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeLoadException(TypeLoadException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2583 };

  /// @brief Field ClassName, offset: 0x90, size: 0x8, def value: None
  ::StringW ___ClassName;

  /// @brief Field AssemblyName, offset: 0x98, size: 0x8, def value: None
  ::StringW ___AssemblyName;

  /// @brief Field MessageArg, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___MessageArg;

  /// @brief Field ResourceId, offset: 0xa8, size: 0x4, def value: None
  int32_t ___ResourceId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::TypeLoadException, ___ClassName) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::TypeLoadException, ___AssemblyName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::TypeLoadException, ___MessageArg) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::TypeLoadException, ___ResourceId) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::TypeLoadException, 0xb0>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::TypeLoadException);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeLoadException*, "System", "TypeLoadException");
