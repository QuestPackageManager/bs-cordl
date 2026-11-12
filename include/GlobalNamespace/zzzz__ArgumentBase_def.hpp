#pragma once
// IWYU pragma private; include "GlobalNamespace/ArgumentBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ArgumentBase)
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class ArgumentBase;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ArgumentBase*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArgumentBase*, "", "ArgumentBase");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ArgumentBase
class CORDL_TYPE ArgumentBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field _autocompleteValues, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__autocompleteValues, put = __cordl_internal_set__autocompleteValues)) ::ArrayW<::StringW> _autocompleteValues;

  /// @brief Field _autocompleteValuesProvider, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__autocompleteValuesProvider,
                      put = __cordl_internal_set__autocompleteValuesProvider)) ::System::Func_1<::ArrayW<::StringW>>* _autocompleteValuesProvider;

  __declspec(property(get = get_autocompleteValues, put = set_autocompleteValues)) ::ArrayW<::StringW> autocompleteValues;

  /// @brief Field description, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_description, put = __cordl_internal_set_description)) ::StringW description;

  __declspec(property(get = get_isOptional)) bool isOptional;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  __declspec(property(get = get_supportsAutocomplete)) bool supportsAutocomplete;

  /// @brief Field valueType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_valueType, put = __cordl_internal_set_valueType)) ::System::Type* valueType;

  static inline ::GlobalNamespace::ArgumentBase* New_ctor();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Reset();

  /// @brief Method SetAutocompleteValuesProvider, addr 0x3577de4, size 0x8, virtual false, abstract: false, final false
  inline void SetAutocompleteValuesProvider(::System::Func_1<::ArrayW<::StringW>>* autocompleteValuesProvider);

  /// @brief Method TryParseWithValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryParseWithValue(::StringW inValue, ::by_ref<::StringW> outError);

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get__autocompleteValues() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get__autocompleteValues();

  constexpr ::System::Func_1<::ArrayW<::StringW>>* const& __cordl_internal_get__autocompleteValuesProvider() const;

  constexpr ::System::Func_1<::ArrayW<::StringW>>*& __cordl_internal_get__autocompleteValuesProvider();

  constexpr ::StringW const& __cordl_internal_get_description() const;

  constexpr ::StringW& __cordl_internal_get_description();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Type* const& __cordl_internal_get_valueType() const;

  constexpr ::System::Type*& __cordl_internal_get_valueType();

  constexpr void __cordl_internal_set__autocompleteValues(::ArrayW<::StringW> value);

  constexpr void __cordl_internal_set__autocompleteValuesProvider(::System::Func_1<::ArrayW<::StringW>>* value);

  constexpr void __cordl_internal_set_description(::StringW value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_valueType(::System::Type* value);

  /// @brief Method .ctor, addr 0x3577dec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_autocompleteValues, addr 0x3577514, size 0x34, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> get_autocompleteValues();

  /// @brief Method get_isOptional, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isOptional();

  /// @brief Method get_supportsAutocomplete, addr 0x35774cc, size 0x48, virtual false, abstract: false, final false
  inline bool get_supportsAutocomplete();

  /// @brief Method set_autocompleteValues, addr 0x3577ddc, size 0x8, virtual false, abstract: false, final false
  inline void set_autocompleteValues(::ArrayW<::StringW> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgumentBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArgumentBase", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArgumentBase(ArgumentBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArgumentBase", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArgumentBase(ArgumentBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19754 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field description, offset: 0x18, size: 0x8, def value: None
  ::StringW ___description;

  /// @brief Field valueType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___valueType;

  /// @brief Field _autocompleteValues, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW> ____autocompleteValues;

  /// @brief Field _autocompleteValuesProvider, offset: 0x30, size: 0x8, def value: None
  ::System::Func_1<::ArrayW<::StringW>>* ____autocompleteValuesProvider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArgumentBase, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArgumentBase, ___description) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArgumentBase, ___valueType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArgumentBase, ____autocompleteValues) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArgumentBase, ____autocompleteValuesProvider) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArgumentBase) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
