#pragma once
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
// Type: System::MonoTypeInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2578))
// CS Name: ::System::MonoTypeInfo*
class CORDL_TYPE MonoTypeInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field full_name, offset 0x10, size 0x8
  __declspec(property(get = __get_full_name, put = __set_full_name))::StringW full_name;

  /// @brief Field default_ctor, offset 0x18, size 0x8
  __declspec(property(get = __get_default_ctor, put = __set_default_ctor))::System::Reflection::RuntimeConstructorInfo* default_ctor;

  constexpr ::StringW& __get_full_name();

  constexpr ::StringW const& __get_full_name() const;

  constexpr void __set_full_name(::StringW value);

  constexpr ::System::Reflection::RuntimeConstructorInfo*& __get_default_ctor();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::RuntimeConstructorInfo*> const& __get_default_ctor() const;

  constexpr void __set_default_ctor(::System::Reflection::RuntimeConstructorInfo* value);

  static inline ::System::MonoTypeInfo* New_ctor();

  /// @brief Method .ctor addr 0x249b308 size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MonoTypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoTypeInfo(MonoTypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoTypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoTypeInfo(MonoTypeInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoTypeInfo();

public:
  /// @brief Field full_name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___full_name;

  /// @brief Field default_ctor, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::RuntimeConstructorInfo* ___default_ctor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MonoTypeInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::MonoTypeInfo, ___full_name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::MonoTypeInfo, ___default_ctor) == 0x18, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::MonoTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoTypeInfo*, "System", "MonoTypeInfo");
