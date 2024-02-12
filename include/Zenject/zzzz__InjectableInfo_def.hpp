#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InjectableInfo)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
struct InjectSources;
}
// Forward declare root types
namespace Zenject {
class InjectableInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InjectableInfo);
// Type: Zenject::InjectableInfo
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15862))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15856))
// CS Name: ::Zenject::InjectableInfo*
class CORDL_TYPE InjectableInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Optional, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_Optional, put = __cordl_internal_set_Optional)) bool Optional;

  /// @brief Field Identifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Identifier, put = __cordl_internal_set_Identifier))::System::Object* Identifier;

  /// @brief Field SourceType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_SourceType, put = __cordl_internal_set_SourceType))::Zenject::InjectSources SourceType;

  /// @brief Field MemberName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_MemberName, put = __cordl_internal_set_MemberName))::StringW MemberName;

  /// @brief Field MemberType, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_MemberType, put = __cordl_internal_set_MemberType))::System::Type* MemberType;

  /// @brief Field DefaultValue, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_DefaultValue, put = __cordl_internal_set_DefaultValue))::System::Object* DefaultValue;

  constexpr bool& __cordl_internal_get_Optional();

  constexpr bool const& __cordl_internal_get_Optional() const;

  constexpr void __cordl_internal_set_Optional(bool value);

  constexpr ::System::Object*& __cordl_internal_get_Identifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_Identifier() const;

  constexpr void __cordl_internal_set_Identifier(::System::Object* value);

  constexpr ::Zenject::InjectSources& __cordl_internal_get_SourceType();

  constexpr ::Zenject::InjectSources const& __cordl_internal_get_SourceType() const;

  constexpr void __cordl_internal_set_SourceType(::Zenject::InjectSources value);

  constexpr ::StringW& __cordl_internal_get_MemberName();

  constexpr ::StringW const& __cordl_internal_get_MemberName() const;

  constexpr void __cordl_internal_set_MemberName(::StringW value);

  constexpr ::System::Type*& __cordl_internal_get_MemberType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_MemberType() const;

  constexpr void __cordl_internal_set_MemberType(::System::Type* value);

  constexpr ::System::Object*& __cordl_internal_get_DefaultValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_DefaultValue() const;

  constexpr void __cordl_internal_set_DefaultValue(::System::Object* value);

  static inline ::Zenject::InjectableInfo* New_ctor(bool optional, ::System::Object* identifier, ::StringW memberName, ::System::Type* memberType, ::System::Object* defaultValue,
                                                    ::Zenject::InjectSources sourceType);

  /// @brief Method .ctor, addr 0x2ed5894, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(bool optional, ::System::Object* identifier, ::StringW memberName, ::System::Type* memberType, ::System::Object* defaultValue, ::Zenject::InjectSources sourceType);

  // Ctor Parameters [CppParam { name: "", ty: "InjectableInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectableInfo(InjectableInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectableInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectableInfo(InjectableInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectableInfo();

public:
  /// @brief Field Optional, offset: 0x10, size: 0x1, def value: None
  bool ___Optional;

  /// @brief Field Identifier, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___Identifier;

  /// @brief Field SourceType, offset: 0x20, size: 0x4, def value: None
  ::Zenject::InjectSources ___SourceType;

  /// @brief Field MemberName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___MemberName;

  /// @brief Field MemberType, offset: 0x30, size: 0x8, def value: None
  ::System::Type* ___MemberType;

  /// @brief Field DefaultValue, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ___DefaultValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InjectableInfo, 0x40>, "Size mismatch!");

static_assert(offsetof(::Zenject::InjectableInfo, ___Optional) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectableInfo, ___Identifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectableInfo, ___SourceType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectableInfo, ___MemberName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectableInfo, ___MemberType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectableInfo, ___DefaultValue) == 0x38, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::InjectableInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectableInfo*, "Zenject", "InjectableInfo");
