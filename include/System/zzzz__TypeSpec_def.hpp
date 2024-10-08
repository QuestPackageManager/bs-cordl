#pragma once
// IWYU pragma private; include "System/TypeSpec.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeSpec)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
class ModifierSpec;
}
namespace System {
class TypeIdentifier;
}
namespace System {
class Type;
}
namespace System {
struct __TypeSpec__DisplayNameFormat;
}
// Forward declare root types
namespace System {
struct __TypeSpec__DisplayNameFormat;
}
namespace System {
class TypeSpec;
}
// Write type traits
MARK_VAL_T(::System::__TypeSpec__DisplayNameFormat);
MARK_REF_PTR_T(::System::TypeSpec);
// Type: ::DisplayNameFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::TypeSpec::DisplayNameFormat
struct CORDL_TYPE __TypeSpec__DisplayNameFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TypeSpec__DisplayNameFormat_Unwrapped
  enum struct ____TypeSpec__DisplayNameFormat_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_WANT_ASSEMBLY = static_cast<int32_t>(0x1),
    __E_NO_MODIFIERS = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TypeSpec__DisplayNameFormat_Unwrapped() const noexcept {
    return static_cast<____TypeSpec__DisplayNameFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeSpec__DisplayNameFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TypeSpec__DisplayNameFormat(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::System::__TypeSpec__DisplayNameFormat const Default;

  /// @brief Field NO_MODIFIERS value: static_cast<int32_t>(0x2)
  static ::System::__TypeSpec__DisplayNameFormat const NO_MODIFIERS;

  /// @brief Field WANT_ASSEMBLY value: static_cast<int32_t>(0x1)
  static ::System::__TypeSpec__DisplayNameFormat const WANT_ASSEMBLY;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2638 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TypeSpec__DisplayNameFormat, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__TypeSpec__DisplayNameFormat, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: System::TypeSpec
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::TypeSpec*
class CORDL_TYPE TypeSpec : public ::System::Object {
public:
  // Declarations
  using DisplayNameFormat = ::System::__TypeSpec__DisplayNameFormat;

  __declspec(property(get = get_DisplayFullName)) ::StringW DisplayFullName;

  __declspec(property(get = get_HasModifiers)) bool HasModifiers;

  /// @brief Field assembly_name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_assembly_name, put = __cordl_internal_set_assembly_name)) ::StringW assembly_name;

  /// @brief Field display_fullname, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_display_fullname, put = __cordl_internal_set_display_fullname)) ::StringW display_fullname;

  /// @brief Field generic_params, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_generic_params, put = __cordl_internal_set_generic_params)) ::System::Collections::Generic::List_1<::System::TypeSpec*>* generic_params;

  /// @brief Field is_byref, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_is_byref, put = __cordl_internal_set_is_byref)) bool is_byref;

  /// @brief Field modifier_spec, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_modifier_spec, put = __cordl_internal_set_modifier_spec)) ::System::Collections::Generic::List_1<::System::ModifierSpec*>* modifier_spec;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::System::TypeIdentifier* name;

  /// @brief Field nested, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nested, put = __cordl_internal_set_nested)) ::System::Collections::Generic::List_1<::System::TypeIdentifier*>* nested;

  /// @brief Method AddModifier, addr 0x3dcf108, size 0xec, virtual false, abstract: false, final false
  inline void AddModifier(::System::ModifierSpec* md);

  /// @brief Method AddName, addr 0x3dcefdc, size 0x124, virtual false, abstract: false, final false
  inline void AddName(::StringW type_name);

  /// @brief Method BoundCheck, addr 0x3dcf2a4, size 0x84, virtual false, abstract: false, final false
  static inline void BoundCheck(int32_t idx, ::StringW s);

  /// @brief Method GetDisplayFullName, addr 0x3dcd31c, size 0x46c, virtual false, abstract: false, final false
  inline ::StringW GetDisplayFullName(::System::__TypeSpec__DisplayNameFormat flags);

  /// @brief Method GetModifierString, addr 0x3dcd7b0, size 0x1f4, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* GetModifierString(::System::Text::StringBuilder* sb);

  static inline ::System::TypeSpec* New_ctor();

  /// @brief Method Parse, addr 0x3dcda74, size 0xba0, virtual false, abstract: false, final false
  static inline ::System::TypeSpec* Parse(::StringW name, ByRef<int32_t> p, bool is_recurse, bool allow_aqn);

  /// @brief Method Parse, addr 0x3dcd9a4, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::TypeSpec* Parse(::StringW typeName);

  /// @brief Method ParsedTypeIdentifier, addr 0x3dcf100, size 0x8, virtual false, abstract: false, final false
  static inline ::System::TypeIdentifier* ParsedTypeIdentifier(::StringW displayName);

  /// @brief Method Resolve, addr 0x3dce708, size 0x8d4, virtual false, abstract: false, final false
  inline ::System::Type* Resolve(::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver,
                                 ::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>* typeResolver, bool throwOnError, bool ignoreCase,
                                 ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method SkipSpace, addr 0x3dcf1f4, size 0xb0, virtual false, abstract: false, final false
  static inline void SkipSpace(::StringW name, ByRef<int32_t> pos);

  /// @brief Method UnescapeInternalName, addr 0x3dce614, size 0xf4, virtual false, abstract: false, final false
  static inline ::StringW UnescapeInternalName(::StringW displayName);

  constexpr ::StringW const& __cordl_internal_get_assembly_name() const;

  constexpr ::StringW& __cordl_internal_get_assembly_name();

  constexpr ::StringW const& __cordl_internal_get_display_fullname() const;

  constexpr ::StringW& __cordl_internal_get_display_fullname();

  constexpr ::System::Collections::Generic::List_1<::System::TypeSpec*>*& __cordl_internal_get_generic_params();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::TypeSpec*>*> const& __cordl_internal_get_generic_params() const;

  constexpr bool const& __cordl_internal_get_is_byref() const;

  constexpr bool& __cordl_internal_get_is_byref();

  constexpr ::System::Collections::Generic::List_1<::System::ModifierSpec*>*& __cordl_internal_get_modifier_spec();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ModifierSpec*>*> const& __cordl_internal_get_modifier_spec() const;

  constexpr ::System::TypeIdentifier*& __cordl_internal_get_name();

  constexpr ::cordl_internals::to_const_pointer<::System::TypeIdentifier*> const& __cordl_internal_get_name() const;

  constexpr ::System::Collections::Generic::List_1<::System::TypeIdentifier*>*& __cordl_internal_get_nested();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::TypeIdentifier*>*> const& __cordl_internal_get_nested() const;

  constexpr void __cordl_internal_set_assembly_name(::StringW value);

  constexpr void __cordl_internal_set_display_fullname(::StringW value);

  constexpr void __cordl_internal_set_generic_params(::System::Collections::Generic::List_1<::System::TypeSpec*>* value);

  constexpr void __cordl_internal_set_is_byref(bool value);

  constexpr void __cordl_internal_set_modifier_spec(::System::Collections::Generic::List_1<::System::ModifierSpec*>* value);

  constexpr void __cordl_internal_set_name(::System::TypeIdentifier* value);

  constexpr void __cordl_internal_set_nested(::System::Collections::Generic::List_1<::System::TypeIdentifier*>* value);

  /// @brief Method .ctor, addr 0x3dcf328, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DisplayFullName, addr 0x3dcd788, size 0x28, virtual false, abstract: false, final false
  inline ::StringW get_DisplayFullName();

  /// @brief Method get_HasModifiers, addr 0x3dcd30c, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasModifiers();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeSpec();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeSpec", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeSpec(TypeSpec&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeSpec", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeSpec(TypeSpec const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::System::TypeIdentifier* ___name;

  /// @brief Field assembly_name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___assembly_name;

  /// @brief Field nested, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::TypeIdentifier*>* ___nested;

  /// @brief Field generic_params, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::TypeSpec*>* ___generic_params;

  /// @brief Field modifier_spec, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ModifierSpec*>* ___modifier_spec;

  /// @brief Field is_byref, offset: 0x38, size: 0x1, def value: None
  bool ___is_byref;

  /// @brief Field display_fullname, offset: 0x40, size: 0x8, def value: None
  ::StringW ___display_fullname;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2639 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeSpec, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::TypeSpec, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TypeSpec, ___assembly_name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TypeSpec, ___nested) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::TypeSpec, ___generic_params) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::TypeSpec, ___modifier_spec) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::TypeSpec, ___is_byref) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::TypeSpec, ___display_fullname) == 0x40, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::__TypeSpec__DisplayNameFormat, "System", "TypeSpec/DisplayNameFormat");
NEED_NO_BOX(::System::TypeSpec);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeSpec*, "System", "TypeSpec");
