#pragma once
// IWYU pragma private; include "System/MonoTypeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoTypeInfo)
namespace System::Reflection {
class RuntimeConstructorInfo;
}
// Forward declare root types
namespace System {
class MonoTypeInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::MonoTypeInfo);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.MonoTypeInfo
class CORDL_TYPE MonoTypeInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field default_ctor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_default_ctor, put = __cordl_internal_set_default_ctor)) ::System::Reflection::RuntimeConstructorInfo* default_ctor;

  /// @brief Field full_name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_full_name, put = __cordl_internal_set_full_name)) ::StringW full_name;

  static inline ::System::MonoTypeInfo* New_ctor();

  constexpr ::System::Reflection::RuntimeConstructorInfo* const& __cordl_internal_get_default_ctor() const;

  constexpr ::System::Reflection::RuntimeConstructorInfo*& __cordl_internal_get_default_ctor();

  constexpr ::StringW const& __cordl_internal_get_full_name() const;

  constexpr ::StringW& __cordl_internal_get_full_name();

  constexpr void __cordl_internal_set_default_ctor(::System::Reflection::RuntimeConstructorInfo* value);

  constexpr void __cordl_internal_set_full_name(::StringW value);

  /// @brief Method .ctor, addr 0x3e344b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoTypeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoTypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoTypeInfo(MonoTypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoTypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoTypeInfo(MonoTypeInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2582 };

  /// @brief Field full_name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___full_name;

  /// @brief Field default_ctor, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::RuntimeConstructorInfo* ___default_ctor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::MonoTypeInfo, ___full_name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::MonoTypeInfo, ___default_ctor) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::MonoTypeInfo, 0x20>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MonoTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoTypeInfo*, "System", "MonoTypeInfo");
