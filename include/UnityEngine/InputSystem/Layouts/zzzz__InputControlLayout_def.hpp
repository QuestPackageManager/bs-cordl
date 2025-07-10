#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NameAndParameters_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlLayout)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Layouts {
struct Builder_InputControlLayout_ControlBuilder;
}
namespace UnityEngine::InputSystem::Layouts {
struct Collection_InputControlLayout_LayoutMatcher;
}
namespace UnityEngine::InputSystem::Layouts {
struct Collection_InputControlLayout_PrecompiledLayout;
}
namespace UnityEngine::InputSystem::Layouts {
class Collection_InputControlLayout__GetBaseLayouts_d__24;
}
namespace UnityEngine::InputSystem::Layouts {
class ControlBuilder_Builder_InputControlLayout___c;
}
namespace UnityEngine::InputSystem::Layouts {
class ControlItemJson_InputControlLayout___c;
}
namespace UnityEngine::InputSystem::Layouts {
struct ControlItem_InputControlLayout_Flags;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlAttribute;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout_Builder;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_CacheRefInstance;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_Cache;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_Collection;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout_ControlItemJson;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_ControlItem;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_Flags;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_LayoutJsonNameAndDescriptorOnly;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_LayoutJson;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout_LayoutNotFoundException;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout___c;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace UnityEngine::InputSystem::Layouts {
class LayoutJson_InputControlLayout___c;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct InlinedArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct NameAndParameters;
}
namespace UnityEngine::InputSystem::Utilities {
struct NamedValue;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
struct ControlItem_InputControlLayout_Flags;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_Flags;
}
namespace UnityEngine::InputSystem::Layouts {
class Collection_InputControlLayout__GetBaseLayouts_d__24;
}
namespace UnityEngine::InputSystem::Layouts {
class ControlBuilder_Builder_InputControlLayout___c;
}
namespace UnityEngine::InputSystem::Layouts {
class ControlItemJson_InputControlLayout___c;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout_Builder;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout_ControlItemJson;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout_LayoutNotFoundException;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout___c;
}
namespace UnityEngine::InputSystem::Layouts {
class LayoutJson_InputControlLayout___c;
}
namespace UnityEngine::InputSystem::Layouts {
struct Builder_InputControlLayout_ControlBuilder;
}
namespace UnityEngine::InputSystem::Layouts {
struct Collection_InputControlLayout_LayoutMatcher;
}
namespace UnityEngine::InputSystem::Layouts {
struct Collection_InputControlLayout_PrecompiledLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_Cache;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_CacheRefInstance;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_Collection;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_ControlItem;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_LayoutJson;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_LayoutJsonNameAndDescriptorOnly;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::InputControlLayout);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::InputControlLayout___c);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_LayoutMatcher);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_PrecompiledLayout);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJsonNameAndDescriptorOnly);
// Dependencies
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem/Flags
struct CORDL_TYPE ControlItem_InputControlLayout_Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ControlItem_InputControlLayout_Flags_Unwrapped
  enum struct __ControlItem_InputControlLayout_Flags_Unwrapped : int32_t {
    __E_isModifyingExistingControl = static_cast<int32_t>(0x1),
    __E_IsNoisy = static_cast<int32_t>(0x2),
    __E_IsSynthetic = static_cast<int32_t>(0x4),
    __E_IsFirstDefinedInThisLayout = static_cast<int32_t>(0x8),
    __E_DontReset = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ControlItem_InputControlLayout_Flags_Unwrapped() const noexcept {
    return static_cast<__ControlItem_InputControlLayout_Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ControlItem_InputControlLayout_Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ControlItem_InputControlLayout_Flags(int32_t value__) noexcept;

  /// @brief Field DontReset value: I32(16)
  static ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags const DontReset;

  /// @brief Field IsFirstDefinedInThisLayout value: I32(8)
  static ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags const IsFirstDefinedInThisLayout;

  /// @brief Field IsNoisy value: I32(2)
  static ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags const IsNoisy;

  /// @brief Field IsSynthetic value: I32(4)
  static ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags const IsSynthetic;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7006 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field isModifyingExistingControl value: I32(1)
  static ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags const isModifyingExistingControl;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies UnityEngine.InputSystem.Layouts.InputControlLayout::ControlItem::Flags, UnityEngine.InputSystem.Utilities.FourCC, UnityEngine.InputSystem.Utilities.InternedString,
// UnityEngine.InputSystem.Utilities.NameAndParameters, UnityEngine.InputSystem.Utilities.NamedValue, UnityEngine.InputSystem.Utilities.PrimitiveValue,
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<TValue>
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem
struct CORDL_TYPE InputControlLayout_ControlItem {
public:
  // Declarations
  using Flags = ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags;

  __declspec(property(get = get_aliases, put = set_aliases)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> aliases;

  __declspec(property(get = get_arraySize, put = set_arraySize)) int32_t arraySize;

  __declspec(property(get = get_bit, put = set_bit)) uint32_t bit;

  __declspec(property(get = get_defaultState, put = set_defaultState)) ::UnityEngine::InputSystem::Utilities::PrimitiveValue defaultState;

  __declspec(property(get = get_displayName, put = set_displayName)) ::StringW displayName;

  __declspec(property(get = get_dontReset, put = set_dontReset)) bool dontReset;

  __declspec(property(get = get_flags, put = set_flags)) ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags flags;

  __declspec(property(get = get_format, put = set_format)) ::UnityEngine::InputSystem::Utilities::FourCC format;

  __declspec(property(get = get_isArray)) bool isArray;

  __declspec(property(get = get_isFirstDefinedInThisLayout, put = set_isFirstDefinedInThisLayout)) bool isFirstDefinedInThisLayout;

  __declspec(property(get = get_isModifyingExistingControl, put = set_isModifyingExistingControl)) bool isModifyingExistingControl;

  __declspec(property(get = get_isNoisy, put = set_isNoisy)) bool isNoisy;

  __declspec(property(get = get_isSynthetic, put = set_isSynthetic)) bool isSynthetic;

  __declspec(property(get = get_layout, put = set_layout)) ::UnityEngine::InputSystem::Utilities::InternedString layout;

  __declspec(property(get = get_maxValue, put = set_maxValue)) ::UnityEngine::InputSystem::Utilities::PrimitiveValue maxValue;

  __declspec(property(get = get_minValue, put = set_minValue)) ::UnityEngine::InputSystem::Utilities::PrimitiveValue minValue;

  __declspec(property(get = get_name, put = set_name)) ::UnityEngine::InputSystem::Utilities::InternedString name;

  __declspec(property(get = get_offset, put = set_offset)) uint32_t offset;

  __declspec(property(get = get_parameters, put = set_parameters)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> parameters;

  __declspec(property(get = get_processors, put = set_processors)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> processors;

  __declspec(property(get = get_shortDisplayName, put = set_shortDisplayName)) ::StringW shortDisplayName;

  __declspec(property(get = get_sizeInBits, put = set_sizeInBits)) uint32_t sizeInBits;

  __declspec(property(get = get_usages, put = set_usages)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> usages;

  __declspec(property(get = get_useStateFrom, put = set_useStateFrom)) ::StringW useStateFrom;

  __declspec(property(get = get_variants, put = set_variants)) ::UnityEngine::InputSystem::Utilities::InternedString variants;

  /// @brief Method Merge, addr 0x461e45c, size 0x39c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem Merge(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem other);

  /// @brief Method get_aliases, addr 0x461ed38, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_aliases();

  /// @brief Method get_arraySize, addr 0x461edc4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_arraySize();

  /// @brief Method get_bit, addr 0x461ed84, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_bit();

  /// @brief Method get_defaultState, addr 0x461edd4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue get_defaultState();

  /// @brief Method get_displayName, addr 0x461ed04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_dontReset, addr 0x461ee34, size 0xc, virtual false, abstract: false, final false
  inline bool get_dontReset();

  /// @brief Method get_flags, addr 0x461edb4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags get_flags();

  /// @brief Method get_format, addr 0x461eda4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Method get_isArray, addr 0x461a568, size 0x10, virtual false, abstract: false, final false
  inline bool get_isArray();

  /// @brief Method get_isFirstDefinedInThisLayout, addr 0x461ee40, size 0xc, virtual false, abstract: false, final false
  inline bool get_isFirstDefinedInThisLayout();

  /// @brief Method get_isModifyingExistingControl, addr 0x461ee10, size 0xc, virtual false, abstract: false, final false
  inline bool get_isModifyingExistingControl();

  /// @brief Method get_isNoisy, addr 0x461ee1c, size 0xc, virtual false, abstract: false, final false
  inline bool get_isNoisy();

  /// @brief Method get_isSynthetic, addr 0x461ee28, size 0xc, virtual false, abstract: false, final false
  inline bool get_isSynthetic();

  /// @brief Method get_layout, addr 0x461eccc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString get_layout();

  /// @brief Method get_maxValue, addr 0x461edfc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue get_maxValue();

  /// @brief Method get_minValue, addr 0x461ede8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue get_minValue();

  /// @brief Method get_name, addr 0x461ecb8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString get_name();

  /// @brief Method get_offset, addr 0x461ed74, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_offset();

  /// @brief Method get_parameters, addr 0x461ed4c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> get_parameters();

  /// @brief Method get_processors, addr 0x461ed60, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> get_processors();

  /// @brief Method get_shortDisplayName, addr 0x461ed14, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_shortDisplayName();

  /// @brief Method get_sizeInBits, addr 0x461ed94, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_sizeInBits();

  /// @brief Method get_usages, addr 0x461ed24, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_usages();

  /// @brief Method get_useStateFrom, addr 0x461ecf4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_useStateFrom();

  /// @brief Method get_variants, addr 0x461ece0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString get_variants();

  /// @brief Method set_aliases, addr 0x461ed44, size 0x8, virtual false, abstract: false, final false
  inline void set_aliases(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value);

  /// @brief Method set_arraySize, addr 0x461edcc, size 0x8, virtual false, abstract: false, final false
  inline void set_arraySize(int32_t value);

  /// @brief Method set_bit, addr 0x461ed8c, size 0x8, virtual false, abstract: false, final false
  inline void set_bit(uint32_t value);

  /// @brief Method set_defaultState, addr 0x461ede0, size 0x8, virtual false, abstract: false, final false
  inline void set_defaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method set_displayName, addr 0x461ed0c, size 0x8, virtual false, abstract: false, final false
  inline void set_displayName(::StringW value);

  /// @brief Method set_dontReset, addr 0x461cba0, size 0x20, virtual false, abstract: false, final false
  inline void set_dontReset(bool value);

  /// @brief Method set_flags, addr 0x461edbc, size 0x8, virtual false, abstract: false, final false
  inline void set_flags(::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags value);

  /// @brief Method set_format, addr 0x461edac, size 0x8, virtual false, abstract: false, final false
  inline void set_format(::UnityEngine::InputSystem::Utilities::FourCC value);

  /// @brief Method set_isFirstDefinedInThisLayout, addr 0x461cb60, size 0x20, virtual false, abstract: false, final false
  inline void set_isFirstDefinedInThisLayout(bool value);

  /// @brief Method set_isModifyingExistingControl, addr 0x461cb50, size 0x10, virtual false, abstract: false, final false
  inline void set_isModifyingExistingControl(bool value);

  /// @brief Method set_isNoisy, addr 0x461cb80, size 0x20, virtual false, abstract: false, final false
  inline void set_isNoisy(bool value);

  /// @brief Method set_isSynthetic, addr 0x461cbc0, size 0x20, virtual false, abstract: false, final false
  inline void set_isSynthetic(bool value);

  /// @brief Method set_layout, addr 0x461ecd8, size 0x8, virtual false, abstract: false, final false
  inline void set_layout(::UnityEngine::InputSystem::Utilities::InternedString value);

  /// @brief Method set_maxValue, addr 0x461ee08, size 0x8, virtual false, abstract: false, final false
  inline void set_maxValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method set_minValue, addr 0x461edf4, size 0x8, virtual false, abstract: false, final false
  inline void set_minValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method set_name, addr 0x461ecc4, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::UnityEngine::InputSystem::Utilities::InternedString value);

  /// @brief Method set_offset, addr 0x461ed7c, size 0x8, virtual false, abstract: false, final false
  inline void set_offset(uint32_t value);

  /// @brief Method set_parameters, addr 0x461ed58, size 0x8, virtual false, abstract: false, final false
  inline void set_parameters(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> value);

  /// @brief Method set_processors, addr 0x461ed6c, size 0x8, virtual false, abstract: false, final false
  inline void set_processors(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> value);

  /// @brief Method set_shortDisplayName, addr 0x461ed1c, size 0x8, virtual false, abstract: false, final false
  inline void set_shortDisplayName(::StringW value);

  /// @brief Method set_sizeInBits, addr 0x461ed9c, size 0x8, virtual false, abstract: false, final false
  inline void set_sizeInBits(uint32_t value);

  /// @brief Method set_usages, addr 0x461ed30, size 0x8, virtual false, abstract: false, final false
  inline void set_usages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value);

  /// @brief Method set_useStateFrom, addr 0x461ecfc, size 0x8, virtual false, abstract: false, final false
  inline void set_useStateFrom(::StringW value);

  /// @brief Method set_variants, addr 0x461ecec, size 0x8, virtual false, abstract: false, final false
  inline void set_variants(::UnityEngine::InputSystem::Utilities::InternedString value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlLayout_ControlItem();

  // Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name:
  // "_layout_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "_variants_k__BackingField", ty:
  // "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "_useStateFrom_k__BackingField", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "_displayName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_shortDisplayName_k__BackingField", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "_usages_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "",
  // def_value: None }, CppParam { name: "_aliases_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "",
  // def_value: None }, CppParam { name: "_parameters_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>", modifiers: "",
  // def_value: None }, CppParam { name: "_processors_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>",
  // modifiers: "", def_value: None }, CppParam { name: "_offset_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_bit_k__BackingField", ty: "uint32_t", modifiers:
  // "", def_value: None }, CppParam { name: "_sizeInBits_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_format_k__BackingField", ty:
  // "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "_flags_k__BackingField", ty:
  // "::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags", modifiers: "", def_value: None }, CppParam { name: "_arraySize_k__BackingField", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "_defaultState_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }, CppParam { name:
  // "_minValue_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }, CppParam { name: "_maxValue_k__BackingField", ty:
  // "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }]
  constexpr InputControlLayout_ControlItem(::UnityEngine::InputSystem::Utilities::InternedString _name_k__BackingField, ::UnityEngine::InputSystem::Utilities::InternedString _layout_k__BackingField,
                                           ::UnityEngine::InputSystem::Utilities::InternedString _variants_k__BackingField, ::StringW _useStateFrom_k__BackingField,
                                           ::StringW _displayName_k__BackingField, ::StringW _shortDisplayName_k__BackingField,
                                           ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> _usages_k__BackingField,
                                           ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> _aliases_k__BackingField,
                                           ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> _parameters_k__BackingField,
                                           ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> _processors_k__BackingField,
                                           uint32_t _offset_k__BackingField, uint32_t _bit_k__BackingField, uint32_t _sizeInBits_k__BackingField,
                                           ::UnityEngine::InputSystem::Utilities::FourCC _format_k__BackingField,
                                           ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags _flags_k__BackingField, int32_t _arraySize_k__BackingField,
                                           ::UnityEngine::InputSystem::Utilities::PrimitiveValue _defaultState_k__BackingField,
                                           ::UnityEngine::InputSystem::Utilities::PrimitiveValue _minValue_k__BackingField,
                                           ::UnityEngine::InputSystem::Utilities::PrimitiveValue _maxValue_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7007 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xd0 };

  /// @brief Field <name>k__BackingField, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString _name_k__BackingField;

  /// @brief Field <layout>k__BackingField, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString _layout_k__BackingField;

  /// @brief Field <variants>k__BackingField, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString _variants_k__BackingField;

  /// @brief Field <useStateFrom>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW _useStateFrom_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW _displayName_k__BackingField;

  /// @brief Field <shortDisplayName>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW _shortDisplayName_k__BackingField;

  /// @brief Field <usages>k__BackingField, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> _usages_k__BackingField;

  /// @brief Field <aliases>k__BackingField, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> _aliases_k__BackingField;

  /// @brief Field <parameters>k__BackingField, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> _parameters_k__BackingField;

  /// @brief Field <processors>k__BackingField, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> _processors_k__BackingField;

  /// @brief Field <offset>k__BackingField, offset: 0x88, size: 0x4, def value: None
  uint32_t _offset_k__BackingField;

  /// @brief Field <bit>k__BackingField, offset: 0x8c, size: 0x4, def value: None
  uint32_t _bit_k__BackingField;

  /// @brief Field <sizeInBits>k__BackingField, offset: 0x90, size: 0x4, def value: None
  uint32_t _sizeInBits_k__BackingField;

  /// @brief Field <format>k__BackingField, offset: 0x94, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Utilities::FourCC _format_k__BackingField;

  /// @brief Field <flags>k__BackingField, offset: 0x98, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags _flags_k__BackingField;

  /// @brief Field <arraySize>k__BackingField, offset: 0x9c, size: 0x4, def value: None
  int32_t _arraySize_k__BackingField;

  /// @brief Field <defaultState>k__BackingField, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::PrimitiveValue _defaultState_k__BackingField;

  /// @brief Field <minValue>k__BackingField, offset: 0xb0, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::PrimitiveValue _minValue_k__BackingField;

  /// @brief Field <maxValue>k__BackingField, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::PrimitiveValue _maxValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _name_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _layout_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _variants_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _useStateFrom_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _displayName_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _shortDisplayName_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _usages_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _aliases_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _parameters_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _processors_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _offset_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _bit_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _sizeInBits_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _format_k__BackingField) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _flags_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _arraySize_k__BackingField) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _defaultState_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _minValue_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, _maxValue_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, 0xd0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies System.Object
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Builder/ControlBuilder/<>c
class CORDL_TYPE ControlBuilder_Builder_InputControlLayout___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0)) ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* __9__14_0;

  static inline ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c* New_ctor();

  /// @brief Method <WithUsages>b__14_0, addr 0x461fdd0, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString _WithUsages_b__14_0(::StringW x);

  /// @brief Method .ctor, addr 0x461fdc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__14_0();

  static inline void setStaticF___9(::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c* value);

  static inline void setStaticF___9__14_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControlBuilder_Builder_InputControlLayout___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControlBuilder_Builder_InputControlLayout___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControlBuilder_Builder_InputControlLayout___c(ControlBuilder_Builder_InputControlLayout___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControlBuilder_Builder_InputControlLayout___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControlBuilder_Builder_InputControlLayout___c(ControlBuilder_Builder_InputControlLayout___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7008 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Builder/ControlBuilder
struct CORDL_TYPE Builder_InputControlLayout_ControlBuilder {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c;

  /// @brief Method AsArrayOfControlsWithSize, addr 0x461fd24, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder AsArrayOfControlsWithSize(int32_t arraySize);

  /// @brief Method DontReset, addr 0x461f6b0, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder DontReset(bool value);

  /// @brief Method IsNoisy, addr 0x461f650, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder IsNoisy(bool value);

  /// @brief Method IsSynthetic, addr 0x461f5f0, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder IsSynthetic(bool value);

  /// @brief Method UsingStateFrom, addr 0x461fcc0, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder UsingStateFrom(::StringW path);

  /// @brief Method WithBitOffset, addr 0x461f5a8, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder WithBitOffset(uint32_t bit);

  /// @brief Method WithByteOffset, addr 0x461f560, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder WithByteOffset(uint32_t offset);

  /// @brief Method WithDefaultState, addr 0x461fc78, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder WithDefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method WithDisplayName, addr 0x461f3b4, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder WithDisplayName(::StringW displayName);

  /// @brief Method WithFormat, addr 0x461f52c, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder WithFormat(::StringW format);

  /// @brief Method WithFormat, addr 0x461f4e4, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder WithFormat(::UnityEngine::InputSystem::Utilities::FourCC format);

  /// @brief Method WithLayout, addr 0x461f3fc, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder WithLayout(::StringW layout);

  /// @brief Method WithParameters, addr 0x461faec, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder WithParameters(::StringW parameters);

  /// @brief Method WithProcessors, addr 0x461fba4, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder WithProcessors(::StringW processors);

  /// @brief Method WithRange, addr 0x461f758, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder WithRange(float_t minValue, float_t maxValue);

  /// @brief Method WithSizeInBits, addr 0x461f710, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder WithSizeInBits(uint32_t sizeInBits);

  /// @brief Method WithUsages, addr 0x461fae8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder WithUsages(::ArrayW<::StringW, ::Array<::StringW>*> usages);

  /// @brief Method WithUsages, addr 0x461f7f4, size 0x1d0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder
  WithUsages(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> usages);

  /// @brief Method WithUsages, addr 0x461f9c4, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder WithUsages(::System::Collections::Generic::IEnumerable_1<::StringW>* usages);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Builder_InputControlLayout_ControlBuilder();

  // Ctor Parameters [CppParam { name: "builder", ty: "::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr Builder_InputControlLayout_ControlBuilder(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* builder, int32_t index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7009 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field builder, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* builder;

  /// @brief Field index, offset: 0x8, size: 0x4, def value: None
  int32_t index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder, builder) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder, index) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.InputSystem.Utilities.FourCC
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
class CORDL_TYPE InputControlLayout_Builder : public ::System::Object {
public:
  // Declarations
  using ControlBuilder = ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder;

  /// @brief Field <displayName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__displayName_k__BackingField, put = __cordl_internal_set__displayName_k__BackingField)) ::StringW _displayName_k__BackingField;

  /// @brief Field <name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name_k__BackingField, put = __cordl_internal_set__name_k__BackingField)) ::StringW _name_k__BackingField;

  /// @brief Field <stateFormat>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__stateFormat_k__BackingField,
                      put = __cordl_internal_set__stateFormat_k__BackingField)) ::UnityEngine::InputSystem::Utilities::FourCC _stateFormat_k__BackingField;

  /// @brief Field <stateSizeInBytes>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__stateSizeInBytes_k__BackingField, put = __cordl_internal_set__stateSizeInBytes_k__BackingField)) int32_t _stateSizeInBytes_k__BackingField;

  /// @brief Field <type>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__type_k__BackingField, put = __cordl_internal_set__type_k__BackingField)) ::System::Type* _type_k__BackingField;

  /// @brief Field <updateBeforeRender>k__BackingField, offset 0x38, size 0x2
  __declspec(property(get = __cordl_internal_get__updateBeforeRender_k__BackingField, put = __cordl_internal_set__updateBeforeRender_k__BackingField)) ::System::Nullable_1<bool>
      _updateBeforeRender_k__BackingField;

  __declspec(property(get = get_controls)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> controls;

  __declspec(property(get = get_displayName, put = set_displayName)) ::StringW displayName;

  __declspec(property(get = get_extendsLayout, put = set_extendsLayout)) ::StringW extendsLayout;

  /// @brief Field m_ControlCount, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ControlCount, put = __cordl_internal_set_m_ControlCount)) int32_t m_ControlCount;

  /// @brief Field m_Controls, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_Controls,
      put =
          __cordl_internal_set_m_Controls)) ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*>
      m_Controls;

  /// @brief Field m_ExtendsLayout, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExtendsLayout, put = __cordl_internal_set_m_ExtendsLayout)) ::StringW m_ExtendsLayout;

  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  __declspec(property(get = get_stateFormat, put = set_stateFormat)) ::UnityEngine::InputSystem::Utilities::FourCC stateFormat;

  __declspec(property(get = get_stateSizeInBytes, put = set_stateSizeInBytes)) int32_t stateSizeInBytes;

  __declspec(property(get = get_type, put = set_type)) ::System::Type* type;

  __declspec(property(get = get_updateBeforeRender, put = set_updateBeforeRender)) ::System::Nullable_1<bool> updateBeforeRender;

  /// @brief Method AddControl, addr 0x461ef50, size 0x1a4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder AddControl(::StringW name);

  /// @brief Method Build, addr 0x461f180, size 0x22c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* Build();

  /// @brief Method Extend, addr 0x461f148, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* Extend(::StringW baseLayoutName);

  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* New_ctor();

  /// @brief Method WithDisplayName, addr 0x461f0fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithDisplayName(::StringW displayName);

  /// @brief Method WithFormat, addr 0x461f10c, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithFormat(::StringW format);

  /// @brief Method WithFormat, addr 0x461f104, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithFormat(::UnityEngine::InputSystem::Utilities::FourCC format);

  /// @brief Method WithName, addr 0x461f0f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithName(::StringW name);

  /// @brief Method WithSizeInBytes, addr 0x461f140, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithSizeInBytes(int32_t sizeInBytes);

  /// @brief Method WithType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithType();

  constexpr ::StringW const& __cordl_internal_get__displayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__displayName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__name_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& __cordl_internal_get__stateFormat_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Utilities::FourCC& __cordl_internal_get__stateFormat_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__stateSizeInBytes_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__stateSizeInBytes_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__type_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__type_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__updateBeforeRender_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__updateBeforeRender_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_ControlCount() const;

  constexpr int32_t& __cordl_internal_get_m_ControlCount();

  constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*> const&
  __cordl_internal_get_m_Controls() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*>&
  __cordl_internal_get_m_Controls();

  constexpr ::StringW const& __cordl_internal_get_m_ExtendsLayout() const;

  constexpr ::StringW& __cordl_internal_get_m_ExtendsLayout();

  constexpr void __cordl_internal_set__displayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__stateFormat_k__BackingField(::UnityEngine::InputSystem::Utilities::FourCC value);

  constexpr void __cordl_internal_set__stateSizeInBytes_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__type_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__updateBeforeRender_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set_m_ControlCount(int32_t value);

  constexpr void
  __cordl_internal_set_m_Controls(::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*> value);

  constexpr void __cordl_internal_set_m_ExtendsLayout(::StringW value);

  /// @brief Method .ctor, addr 0x461f3ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_controls, addr 0x461eee8, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> get_controls();

  /// @brief Method get_displayName, addr 0x461ee5c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_extendsLayout, addr 0x461ee9c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_extendsLayout();

  /// @brief Method get_name, addr 0x461ee4c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_stateFormat, addr 0x461ee7c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat();

  /// @brief Method get_stateSizeInBytes, addr 0x461ee8c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_stateSizeInBytes();

  /// @brief Method get_type, addr 0x461ee6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_type();

  /// @brief Method get_updateBeforeRender, addr 0x461eed8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_updateBeforeRender();

  /// @brief Method set_displayName, addr 0x461ee64, size 0x8, virtual false, abstract: false, final false
  inline void set_displayName(::StringW value);

  /// @brief Method set_extendsLayout, addr 0x461eea4, size 0x34, virtual false, abstract: false, final false
  inline void set_extendsLayout(::StringW value);

  /// @brief Method set_name, addr 0x461ee54, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_stateFormat, addr 0x461ee84, size 0x8, virtual false, abstract: false, final false
  inline void set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC value);

  /// @brief Method set_stateSizeInBytes, addr 0x461ee94, size 0x8, virtual false, abstract: false, final false
  inline void set_stateSizeInBytes(int32_t value);

  /// @brief Method set_type, addr 0x461ee74, size 0x8, virtual false, abstract: false, final false
  inline void set_type(::System::Type* value);

  /// @brief Method set_updateBeforeRender, addr 0x461eee0, size 0x8, virtual false, abstract: false, final false
  inline void set_updateBeforeRender(::System::Nullable_1<bool> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlLayout_Builder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputControlLayout_Builder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputControlLayout_Builder(InputControlLayout_Builder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputControlLayout_Builder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputControlLayout_Builder(InputControlLayout_Builder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7010 };

  /// @brief Field <name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____displayName_k__BackingField;

  /// @brief Field <type>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ____type_k__BackingField;

  /// @brief Field <stateFormat>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Utilities::FourCC ____stateFormat_k__BackingField;

  /// @brief Field <stateSizeInBytes>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____stateSizeInBytes_k__BackingField;

  /// @brief Field m_ExtendsLayout, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_ExtendsLayout;

  /// @brief Field <updateBeforeRender>k__BackingField, offset: 0x38, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____updateBeforeRender_k__BackingField;

  /// @brief Field m_ControlCount, offset: 0x3c, size: 0x4, def value: None
  int32_t ___m_ControlCount;

  /// @brief Field m_Controls, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*> ___m_Controls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ____name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ____displayName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ____type_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ____stateFormat_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ____stateSizeInBytes_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ___m_ExtendsLayout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ____updateBeforeRender_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ___m_ControlCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ___m_Controls) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, 0x48>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Flags
struct CORDL_TYPE InputControlLayout_Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputControlLayout_Flags_Unwrapped
  enum struct __InputControlLayout_Flags_Unwrapped : int32_t {
    __E_IsGenericTypeOfDevice = static_cast<int32_t>(0x1),
    __E_HideInUI = static_cast<int32_t>(0x2),
    __E_IsOverride = static_cast<int32_t>(0x4),
    __E_CanRunInBackground = static_cast<int32_t>(0x8),
    __E_CanRunInBackgroundIsSet = static_cast<int32_t>(0x10),
    __E_IsNoisy = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputControlLayout_Flags_Unwrapped() const noexcept {
    return static_cast<__InputControlLayout_Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlLayout_Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputControlLayout_Flags(int32_t value__) noexcept;

  /// @brief Field CanRunInBackground value: I32(8)
  static ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags const CanRunInBackground;

  /// @brief Field CanRunInBackgroundIsSet value: I32(16)
  static ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags const CanRunInBackgroundIsSet;

  /// @brief Field HideInUI value: I32(2)
  static ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags const HideInUI;

  /// @brief Field IsGenericTypeOfDevice value: I32(1)
  static ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags const IsGenericTypeOfDevice;

  /// @brief Field IsNoisy value: I32(32)
  static ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags const IsNoisy;

  /// @brief Field IsOverride value: I32(4)
  static ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags const IsOverride;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7011 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies UnityEngine.InputSystem.Layouts.InputDeviceMatcher::MatcherJson
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/LayoutJsonNameAndDescriptorOnly
struct CORDL_TYPE InputControlLayout_LayoutJsonNameAndDescriptorOnly {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlLayout_LayoutJsonNameAndDescriptorOnly();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "extendMultiple", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "device", ty:
  // "::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson", modifiers: "", def_value: None }]
  constexpr InputControlLayout_LayoutJsonNameAndDescriptorOnly(::StringW name, ::StringW extend, ::ArrayW<::StringW, ::Array<::StringW>*> extendMultiple,
                                                               ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson device) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7012 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field extend, offset: 0x8, size: 0x8, def value: None
  ::StringW extend;

  /// @brief Field extendMultiple, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> extendMultiple;

  /// @brief Field device, offset: 0x18, size: 0x58, def value: None
  ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson device;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJsonNameAndDescriptorOnly, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJsonNameAndDescriptorOnly, extend) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJsonNameAndDescriptorOnly, extendMultiple) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJsonNameAndDescriptorOnly, device) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJsonNameAndDescriptorOnly, 0x70>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies System.Object
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/LayoutJson/<>c
class CORDL_TYPE LayoutJson_InputControlLayout___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0)) ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* __9__14_0;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* __9__15_0;

  /// @brief Field <>9__15_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_1, put = setStaticF___9__15_1)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* __9__15_1;

  static inline ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c* New_ctor();

  /// @brief Method <FromLayout>b__15_0, addr 0x4620b90, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _FromLayout_b__15_0(::UnityEngine::InputSystem::Utilities::InternedString x);

  /// @brief Method <FromLayout>b__15_1, addr 0x4620bb4, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _FromLayout_b__15_1(::UnityEngine::InputSystem::Utilities::InternedString x);

  /// @brief Method <ToLayout>b__14_0, addr 0x4620b68, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__14_0(::StringW x);

  /// @brief Method .ctor, addr 0x4620b60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__14_0();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* getStaticF___9__15_0();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* getStaticF___9__15_1();

  static inline void setStaticF___9(::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c* value);

  static inline void setStaticF___9__14_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);

  static inline void setStaticF___9__15_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value);

  static inline void setStaticF___9__15_1(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutJson_InputControlLayout___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutJson_InputControlLayout___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutJson_InputControlLayout___c(LayoutJson_InputControlLayout___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutJson_InputControlLayout___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutJson_InputControlLayout___c(LayoutJson_InputControlLayout___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7013 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/LayoutJson
struct CORDL_TYPE InputControlLayout_LayoutJson {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c;

  /// @brief Method FromLayout, addr 0x461abf4, size 0x340, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson FromLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout);

  /// @brief Method ToLayout, addr 0x461afa4, size 0x94c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* ToLayout();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlLayout_LayoutJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "extendMultiple", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "beforeRender", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "runInBackground", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "commonUsages", ty:
  // "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "description", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "variant", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "isGenericTypeOfDevice", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hideInUI", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "controls", ty: "::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*,::Array<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>*>", modifiers:
  // "", def_value: None }]
  constexpr InputControlLayout_LayoutJson(
      ::StringW name, ::StringW extend, ::ArrayW<::StringW, ::Array<::StringW>*> extendMultiple, ::StringW format, ::StringW beforeRender, ::StringW runInBackground,
      ::ArrayW<::StringW, ::Array<::StringW>*> commonUsages, ::StringW displayName, ::StringW description, ::StringW type, ::StringW variant, bool isGenericTypeOfDevice, bool hideInUI,
      ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*, ::Array<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>*> controls) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7014 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field extend, offset: 0x8, size: 0x8, def value: None
  ::StringW extend;

  /// @brief Field extendMultiple, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> extendMultiple;

  /// @brief Field format, offset: 0x18, size: 0x8, def value: None
  ::StringW format;

  /// @brief Field beforeRender, offset: 0x20, size: 0x8, def value: None
  ::StringW beforeRender;

  /// @brief Field runInBackground, offset: 0x28, size: 0x8, def value: None
  ::StringW runInBackground;

  /// @brief Field commonUsages, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> commonUsages;

  /// @brief Field displayName, offset: 0x38, size: 0x8, def value: None
  ::StringW displayName;

  /// @brief Field description, offset: 0x40, size: 0x8, def value: None
  ::StringW description;

  /// @brief Field type, offset: 0x48, size: 0x8, def value: None
  ::StringW type;

  /// @brief Field variant, offset: 0x50, size: 0x8, def value: None
  ::StringW variant;

  /// @brief Field isGenericTypeOfDevice, offset: 0x58, size: 0x1, def value: None
  bool isGenericTypeOfDevice;

  /// @brief Field hideInUI, offset: 0x59, size: 0x1, def value: None
  bool hideInUI;

  /// @brief Field controls, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*, ::Array<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>*> controls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson, extend) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson, extendMultiple) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson, format) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson, beforeRender) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson, runInBackground) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson, commonUsages) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson, displayName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson, description) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson, type) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson, variant) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson, isGenericTypeOfDevice) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson, hideInUI) == 0x59, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson, controls) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson, 0x68>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies System.Object
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItemJson/<>c
class CORDL_TYPE ControlItemJson_InputControlLayout___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c* __9;

  /// @brief Field <>9__24_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_0, put = setStaticF___9__24_0)) ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* __9__24_0;

  /// @brief Field <>9__24_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_1, put = setStaticF___9__24_1)) ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* __9__24_1;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* __9__25_0;

  /// @brief Field <>9__25_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_1, put = setStaticF___9__25_1)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::StringW>* __9__25_1;

  /// @brief Field <>9__25_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_2, put = setStaticF___9__25_2)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* __9__25_2;

  /// @brief Field <>9__25_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_3, put = setStaticF___9__25_3)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* __9__25_3;

  static inline ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c* New_ctor();

  /// @brief Method <FromControlItems>b__25_0, addr 0x4620cac, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _FromControlItems_b__25_0(::UnityEngine::InputSystem::Utilities::NamedValue x);

  /// @brief Method <FromControlItems>b__25_1, addr 0x4620cb8, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _FromControlItems_b__25_1(::UnityEngine::InputSystem::Utilities::NameAndParameters x);

  /// @brief Method <FromControlItems>b__25_2, addr 0x4620cc4, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _FromControlItems_b__25_2(::UnityEngine::InputSystem::Utilities::InternedString x);

  /// @brief Method <FromControlItems>b__25_3, addr 0x4620ce8, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _FromControlItems_b__25_3(::UnityEngine::InputSystem::Utilities::InternedString x);

  /// @brief Method <ToLayout>b__24_0, addr 0x4620c5c, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__24_0(::StringW x);

  /// @brief Method <ToLayout>b__24_1, addr 0x4620c84, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__24_1(::StringW x);

  /// @brief Method .ctor, addr 0x4620c54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__24_0();

  static inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__24_1();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* getStaticF___9__25_0();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::StringW>* getStaticF___9__25_1();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* getStaticF___9__25_2();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* getStaticF___9__25_3();

  static inline void setStaticF___9(::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c* value);

  static inline void setStaticF___9__24_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);

  static inline void setStaticF___9__24_1(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);

  static inline void setStaticF___9__25_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* value);

  static inline void setStaticF___9__25_1(::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::StringW>* value);

  static inline void setStaticF___9__25_2(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value);

  static inline void setStaticF___9__25_3(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControlItemJson_InputControlLayout___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControlItemJson_InputControlLayout___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControlItemJson_InputControlLayout___c(ControlItemJson_InputControlLayout___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControlItemJson_InputControlLayout___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControlItemJson_InputControlLayout___c(ControlItemJson_InputControlLayout___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7015 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies System.Object
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItemJson
class CORDL_TYPE InputControlLayout_ControlItemJson : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c;

  /// @brief Field alias, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_alias, put = __cordl_internal_set_alias)) ::StringW alias;

  /// @brief Field aliases, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_aliases, put = __cordl_internal_set_aliases)) ::ArrayW<::StringW, ::Array<::StringW>*> aliases;

  /// @brief Field arraySize, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_arraySize, put = __cordl_internal_set_arraySize)) int32_t arraySize;

  /// @brief Field bit, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_bit, put = __cordl_internal_set_bit)) uint32_t bit;

  /// @brief Field defaultState, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultState, put = __cordl_internal_set_defaultState)) ::StringW defaultState;

  /// @brief Field displayName, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_displayName, put = __cordl_internal_set_displayName)) ::StringW displayName;

  /// @brief Field dontReset, offset 0x91, size 0x1
  __declspec(property(get = __cordl_internal_get_dontReset, put = __cordl_internal_set_dontReset)) bool dontReset;

  /// @brief Field format, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_format, put = __cordl_internal_set_format)) ::StringW format;

  /// @brief Field layout, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_layout, put = __cordl_internal_set_layout)) ::StringW layout;

  /// @brief Field maxValue, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_maxValue, put = __cordl_internal_set_maxValue)) ::StringW maxValue;

  /// @brief Field minValue, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_minValue, put = __cordl_internal_set_minValue)) ::StringW minValue;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field noisy, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_noisy, put = __cordl_internal_set_noisy)) bool noisy;

  /// @brief Field offset, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset)) uint32_t offset;

  /// @brief Field parameters, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters)) ::StringW parameters;

  /// @brief Field processors, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_processors, put = __cordl_internal_set_processors)) ::StringW processors;

  /// @brief Field shortDisplayName, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_shortDisplayName, put = __cordl_internal_set_shortDisplayName)) ::StringW shortDisplayName;

  /// @brief Field sizeInBits, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_sizeInBits, put = __cordl_internal_set_sizeInBits)) uint32_t sizeInBits;

  /// @brief Field synthetic, offset 0x92, size 0x1
  __declspec(property(get = __cordl_internal_get_synthetic, put = __cordl_internal_set_synthetic)) bool synthetic;

  /// @brief Field usage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_usage, put = __cordl_internal_set_usage)) ::StringW usage;

  /// @brief Field usages, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_usages, put = __cordl_internal_set_usages)) ::ArrayW<::StringW, ::Array<::StringW>*> usages;

  /// @brief Field useStateFrom, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_useStateFrom, put = __cordl_internal_set_useStateFrom)) ::StringW useStateFrom;

  /// @brief Field variants, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_variants, put = __cordl_internal_set_variants)) ::StringW variants;

  /// @brief Method FromControlItems, addr 0x4620438, size 0x6cc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*, ::Array<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>*>
  FromControlItems(::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*> items);

  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson* New_ctor();

  /// @brief Method ToLayout, addr 0x461fdf8, size 0x640, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem ToLayout();

  constexpr ::StringW const& __cordl_internal_get_alias() const;

  constexpr ::StringW& __cordl_internal_get_alias();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_aliases() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_aliases();

  constexpr int32_t const& __cordl_internal_get_arraySize() const;

  constexpr int32_t& __cordl_internal_get_arraySize();

  constexpr uint32_t const& __cordl_internal_get_bit() const;

  constexpr uint32_t& __cordl_internal_get_bit();

  constexpr ::StringW const& __cordl_internal_get_defaultState() const;

  constexpr ::StringW& __cordl_internal_get_defaultState();

  constexpr ::StringW const& __cordl_internal_get_displayName() const;

  constexpr ::StringW& __cordl_internal_get_displayName();

  constexpr bool const& __cordl_internal_get_dontReset() const;

  constexpr bool& __cordl_internal_get_dontReset();

  constexpr ::StringW const& __cordl_internal_get_format() const;

  constexpr ::StringW& __cordl_internal_get_format();

  constexpr ::StringW const& __cordl_internal_get_layout() const;

  constexpr ::StringW& __cordl_internal_get_layout();

  constexpr ::StringW const& __cordl_internal_get_maxValue() const;

  constexpr ::StringW& __cordl_internal_get_maxValue();

  constexpr ::StringW const& __cordl_internal_get_minValue() const;

  constexpr ::StringW& __cordl_internal_get_minValue();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr bool const& __cordl_internal_get_noisy() const;

  constexpr bool& __cordl_internal_get_noisy();

  constexpr uint32_t const& __cordl_internal_get_offset() const;

  constexpr uint32_t& __cordl_internal_get_offset();

  constexpr ::StringW const& __cordl_internal_get_parameters() const;

  constexpr ::StringW& __cordl_internal_get_parameters();

  constexpr ::StringW const& __cordl_internal_get_processors() const;

  constexpr ::StringW& __cordl_internal_get_processors();

  constexpr ::StringW const& __cordl_internal_get_shortDisplayName() const;

  constexpr ::StringW& __cordl_internal_get_shortDisplayName();

  constexpr uint32_t const& __cordl_internal_get_sizeInBits() const;

  constexpr uint32_t& __cordl_internal_get_sizeInBits();

  constexpr bool const& __cordl_internal_get_synthetic() const;

  constexpr bool& __cordl_internal_get_synthetic();

  constexpr ::StringW const& __cordl_internal_get_usage() const;

  constexpr ::StringW& __cordl_internal_get_usage();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_usages() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_usages();

  constexpr ::StringW const& __cordl_internal_get_useStateFrom() const;

  constexpr ::StringW& __cordl_internal_get_useStateFrom();

  constexpr ::StringW const& __cordl_internal_get_variants() const;

  constexpr ::StringW& __cordl_internal_get_variants();

  constexpr void __cordl_internal_set_alias(::StringW value);

  constexpr void __cordl_internal_set_aliases(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_arraySize(int32_t value);

  constexpr void __cordl_internal_set_bit(uint32_t value);

  constexpr void __cordl_internal_set_defaultState(::StringW value);

  constexpr void __cordl_internal_set_displayName(::StringW value);

  constexpr void __cordl_internal_set_dontReset(bool value);

  constexpr void __cordl_internal_set_format(::StringW value);

  constexpr void __cordl_internal_set_layout(::StringW value);

  constexpr void __cordl_internal_set_maxValue(::StringW value);

  constexpr void __cordl_internal_set_minValue(::StringW value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_noisy(bool value);

  constexpr void __cordl_internal_set_offset(uint32_t value);

  constexpr void __cordl_internal_set_parameters(::StringW value);

  constexpr void __cordl_internal_set_processors(::StringW value);

  constexpr void __cordl_internal_set_shortDisplayName(::StringW value);

  constexpr void __cordl_internal_set_sizeInBits(uint32_t value);

  constexpr void __cordl_internal_set_synthetic(bool value);

  constexpr void __cordl_internal_set_usage(::StringW value);

  constexpr void __cordl_internal_set_usages(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_useStateFrom(::StringW value);

  constexpr void __cordl_internal_set_variants(::StringW value);

  /// @brief Method .ctor, addr 0x4620bd8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlLayout_ControlItemJson();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputControlLayout_ControlItemJson", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputControlLayout_ControlItemJson(InputControlLayout_ControlItemJson&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputControlLayout_ControlItemJson", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputControlLayout_ControlItemJson(InputControlLayout_ControlItemJson const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7016 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field layout, offset: 0x18, size: 0x8, def value: None
  ::StringW ___layout;

  /// @brief Field variants, offset: 0x20, size: 0x8, def value: None
  ::StringW ___variants;

  /// @brief Field usage, offset: 0x28, size: 0x8, def value: None
  ::StringW ___usage;

  /// @brief Field alias, offset: 0x30, size: 0x8, def value: None
  ::StringW ___alias;

  /// @brief Field useStateFrom, offset: 0x38, size: 0x8, def value: None
  ::StringW ___useStateFrom;

  /// @brief Field offset, offset: 0x40, size: 0x4, def value: None
  uint32_t ___offset;

  /// @brief Field bit, offset: 0x44, size: 0x4, def value: None
  uint32_t ___bit;

  /// @brief Field sizeInBits, offset: 0x48, size: 0x4, def value: None
  uint32_t ___sizeInBits;

  /// @brief Field format, offset: 0x50, size: 0x8, def value: None
  ::StringW ___format;

  /// @brief Field arraySize, offset: 0x58, size: 0x4, def value: None
  int32_t ___arraySize;

  /// @brief Field usages, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___usages;

  /// @brief Field aliases, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___aliases;

  /// @brief Field parameters, offset: 0x70, size: 0x8, def value: None
  ::StringW ___parameters;

  /// @brief Field processors, offset: 0x78, size: 0x8, def value: None
  ::StringW ___processors;

  /// @brief Field displayName, offset: 0x80, size: 0x8, def value: None
  ::StringW ___displayName;

  /// @brief Field shortDisplayName, offset: 0x88, size: 0x8, def value: None
  ::StringW ___shortDisplayName;

  /// @brief Field noisy, offset: 0x90, size: 0x1, def value: None
  bool ___noisy;

  /// @brief Field dontReset, offset: 0x91, size: 0x1, def value: None
  bool ___dontReset;

  /// @brief Field synthetic, offset: 0x92, size: 0x1, def value: None
  bool ___synthetic;

  /// @brief Field defaultState, offset: 0x98, size: 0x8, def value: None
  ::StringW ___defaultState;

  /// @brief Field minValue, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___minValue;

  /// @brief Field maxValue, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___maxValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___layout) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___variants) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___usage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___alias) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___useStateFrom) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___offset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___bit) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___sizeInBits) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___format) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___arraySize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___usages) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___aliases) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___parameters) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___processors) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___displayName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___shortDisplayName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___noisy) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___dontReset) == 0x91, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___synthetic) == 0x92, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___defaultState) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___minValue) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___maxValue) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies UnityEngine.InputSystem.Layouts.InputDeviceMatcher, UnityEngine.InputSystem.Utilities.InternedString
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher
struct CORDL_TYPE Collection_InputControlLayout_LayoutMatcher {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Collection_InputControlLayout_LayoutMatcher();

  // Ctor Parameters [CppParam { name: "layoutName", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "deviceMatcher", ty:
  // "::UnityEngine::InputSystem::Layouts::InputDeviceMatcher", modifiers: "", def_value: None }]
  constexpr Collection_InputControlLayout_LayoutMatcher(::UnityEngine::InputSystem::Utilities::InternedString layoutName,
                                                        ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher deviceMatcher) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7017 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field layoutName, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString layoutName;

  /// @brief Field deviceMatcher, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher deviceMatcher;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_LayoutMatcher, layoutName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_LayoutMatcher, deviceMatcher) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_LayoutMatcher, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout
struct CORDL_TYPE Collection_InputControlLayout_PrecompiledLayout {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Collection_InputControlLayout_PrecompiledLayout();

  // Ctor Parameters [CppParam { name: "factoryMethod", ty: "::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*", modifiers: "", def_value: None }, CppParam { name: "metadata", ty:
  // "::StringW", modifiers: "", def_value: None }]
  constexpr Collection_InputControlLayout_PrecompiledLayout(::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* factoryMethod, ::StringW metadata) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7018 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field factoryMethod, offset: 0x0, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* factoryMethod;

  /// @brief Field metadata, offset: 0x8, size: 0x8, def value: None
  ::StringW metadata;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_PrecompiledLayout, factoryMethod) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_PrecompiledLayout, metadata) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_PrecompiledLayout, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct CORDL_TYPE InputControlLayout_Collection {
public:
  // Declarations
  using LayoutMatcher = ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_LayoutMatcher;

  using PrecompiledLayout = ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_PrecompiledLayout;

  using _GetBaseLayouts_d__24 = ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24;

  /// @brief Method AddMatcher, addr 0x4622024, size 0x178, virtual false, abstract: false, final false
  inline void AddMatcher(::UnityEngine::InputSystem::Utilities::InternedString layout, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher);

  /// @brief Method Allocate, addr 0x4620d0c, size 0x24c, virtual false, abstract: false, final false
  inline void Allocate();

  /// @brief Method ComputeDistanceInInheritanceHierarchy, addr 0x462187c, size 0x134, virtual false, abstract: false, final false
  inline bool ComputeDistanceInInheritanceHierarchy(::UnityEngine::InputSystem::Utilities::InternedString firstLayout, ::UnityEngine::InputSystem::Utilities::InternedString secondLayout,
                                                    ::ByRef<int32_t> distance);

  /// @brief Method FindLayoutThatIntroducesControl, addr 0x46219b0, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString FindLayoutThatIntroducesControl(::UnityEngine::InputSystem::InputControl* control,
                                                                                               ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache cache);

  /// @brief Method GetBaseLayoutName, addr 0x462175c, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString GetBaseLayoutName(::UnityEngine::InputSystem::Utilities::InternedString layoutName);

  /// @brief Method GetBaseLayouts, addr 0x4621ea0, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* GetBaseLayouts(::UnityEngine::InputSystem::Utilities::InternedString layout,
                                                                                                                              bool includeSelf);

  /// @brief Method GetControlTypeForLayout, addr 0x4621bc4, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Type* GetControlTypeForLayout(::UnityEngine::InputSystem::Utilities::InternedString layoutName);

  /// @brief Method GetRootLayoutName, addr 0x46217e8, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString GetRootLayoutName(::UnityEngine::InputSystem::Utilities::InternedString layoutName);

  /// @brief Method HasLayout, addr 0x461cd90, size 0xdc, virtual false, abstract: false, final false
  inline bool HasLayout(::UnityEngine::InputSystem::Utilities::InternedString name);

  /// @brief Method IsBasedOn, addr 0x4621f78, size 0xac, virtual false, abstract: false, final false
  inline bool IsBasedOn(::UnityEngine::InputSystem::Utilities::InternedString parentLayout, ::UnityEngine::InputSystem::Utilities::InternedString childLayout);

  /// @brief Method IsGeneratedLayout, addr 0x4621e38, size 0x68, virtual false, abstract: false, final false
  inline bool IsGeneratedLayout(::UnityEngine::InputSystem::Utilities::InternedString layout);

  /// @brief Method TryFindLayoutForType, addr 0x461cbe0, size 0x1b0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString TryFindLayoutForType(::System::Type* layoutType);

  /// @brief Method TryFindMatchingLayout, addr 0x4620f58, size 0x1d0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString TryFindMatchingLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription);

  /// @brief Method TryLoadLayout, addr 0x462131c, size 0x384, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout*
  TryLoadLayout(::UnityEngine::InputSystem::Utilities::InternedString name,
                ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>* table);

  /// @brief Method TryLoadLayoutInternal, addr 0x4621128, size 0x1f4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadLayoutInternal(::UnityEngine::InputSystem::Utilities::InternedString name);

  /// @brief Method ValueTypeIsAssignableFrom, addr 0x4621d10, size 0x128, virtual false, abstract: false, final false
  inline bool ValueTypeIsAssignableFrom(::UnityEngine::InputSystem::Utilities::InternedString layoutName, ::System::Type* valueType);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlLayout_Collection();

  // Ctor Parameters [CppParam { name: "layoutTypes", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*", modifiers: "",
  // def_value: None }, CppParam { name: "layoutStrings", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*", modifiers: "",
  // def_value: None }, CppParam { name: "layoutBuilders", ty:
  // "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>*", modifiers: "",
  // def_value: None }, CppParam { name: "baseLayoutTable", ty:
  // "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>*", modifiers: "", def_value: None },
  // CppParam { name: "layoutOverrides", ty:
  // "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>>*",
  // modifiers: "", def_value: None }, CppParam { name: "layoutOverrideNames", ty: "::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*", modifiers: "",
  // def_value: None }, CppParam { name: "precompiledLayouts", ty:
  // "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_PrecompiledLayout>*",
  // modifiers: "", def_value: None }, CppParam { name: "layoutMatchers", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_LayoutMatcher>*", modifiers: "", def_value: None }]
  constexpr InputControlLayout_Collection(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>* layoutTypes,
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* layoutStrings,
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>* layoutBuilders,
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString>* baseLayoutTable,
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,
                                                   ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>>* layoutOverrides,
      ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>* layoutOverrideNames,
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_PrecompiledLayout>*
          precompiledLayouts,
      ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_LayoutMatcher>* layoutMatchers) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7020 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field kBaseScoreForNonGeneratedLayouts offset 0xffffffff size 0x4
  static constexpr float_t kBaseScoreForNonGeneratedLayouts{ static_cast<float_t>(1.0f) };

  /// @brief Field layoutTypes, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>* layoutTypes;

  /// @brief Field layoutStrings, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* layoutStrings;

  /// @brief Field layoutBuilders, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>* layoutBuilders;

  /// @brief Field baseLayoutTable, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString>* baseLayoutTable;

  /// @brief Field layoutOverrides, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,
                                               ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>>* layoutOverrides;

  /// @brief Field layoutOverrideNames, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>* layoutOverrideNames;

  /// @brief Field precompiledLayouts, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_PrecompiledLayout>*
      precompiledLayouts;

  /// @brief Field layoutMatchers, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_LayoutMatcher>* layoutMatchers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection, layoutTypes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection, layoutStrings) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection, layoutBuilders) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection, baseLayoutTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection, layoutOverrides) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection, layoutOverrideNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection, precompiledLayouts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection, layoutMatchers) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection, 0x40>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object, UnityEngine.InputSystem.Layouts.InputControlLayout::Collection, UnityEngine.InputSystem.Utilities.InternedString
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24
class CORDL_TYPE Collection_InputControlLayout__GetBaseLayouts_d__24 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current)) ::UnityEngine::InputSystem::Utilities::InternedString
      System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityEngine::InputSystem::Utilities::InternedString __2__current;

  /// @brief Field <>3__<>4__this, offset 0x90, size 0x40
  __declspec(property(get = __cordl_internal_get___3____4__this, put = __cordl_internal_set___3____4__this)) ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection __3____4__this;

  /// @brief Field <>3__includeSelf, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get___3__includeSelf, put = __cordl_internal_set___3__includeSelf)) bool __3__includeSelf;

  /// @brief Field <>3__layout, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get___3__layout, put = __cordl_internal_set___3__layout)) ::UnityEngine::InputSystem::Utilities::InternedString __3__layout;

  /// @brief Field <>4__this, offset 0x50, size 0x40
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field includeSelf, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_includeSelf, put = __cordl_internal_set_includeSelf)) bool includeSelf;

  /// @brief Field layout, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_layout, put = __cordl_internal_set_layout)) ::UnityEngine::InputSystem::Utilities::InternedString layout;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x46221a0, size 0xbc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.InternedString>.GetEnumerator, addr 0x46222fc, size 0xc4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*
  System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.InternedString>.get_Current, addr 0x462225c, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::InternedString System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x46223c0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4622268, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x46222a0, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x462219c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get___2__current();

  constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection const& __cordl_internal_get___3____4__this() const;

  constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection& __cordl_internal_get___3____4__this();

  constexpr bool const& __cordl_internal_get___3__includeSelf() const;

  constexpr bool& __cordl_internal_get___3__includeSelf();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get___3__layout() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get___3__layout();

  constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr bool const& __cordl_internal_get_includeSelf() const;

  constexpr bool& __cordl_internal_get_includeSelf();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get_layout() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get_layout();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::InputSystem::Utilities::InternedString value);

  constexpr void __cordl_internal_set___3____4__this(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection value);

  constexpr void __cordl_internal_set___3__includeSelf(bool value);

  constexpr void __cordl_internal_set___3__layout(::UnityEngine::InputSystem::Utilities::InternedString value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_includeSelf(bool value);

  constexpr void __cordl_internal_set_layout(::UnityEngine::InputSystem::Utilities::InternedString value);

  /// @brief Method .ctor, addr 0x4621f44, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__Utilities__InternedString_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__Utilities__InternedString_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Collection_InputControlLayout__GetBaseLayouts_d__24();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Collection_InputControlLayout__GetBaseLayouts_d__24", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Collection_InputControlLayout__GetBaseLayouts_d__24(Collection_InputControlLayout__GetBaseLayouts_d__24&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Collection_InputControlLayout__GetBaseLayouts_d__24", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Collection_InputControlLayout__GetBaseLayouts_d__24(Collection_InputControlLayout__GetBaseLayouts_d__24 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7019 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field includeSelf, offset: 0x2c, size: 0x1, def value: None
  bool ___includeSelf;

  /// @brief Field <>3__includeSelf, offset: 0x2d, size: 0x1, def value: None
  bool _____3__includeSelf;

  /// @brief Field layout, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString ___layout;

  /// @brief Field <>3__layout, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString _____3__layout;

  /// @brief Field <>4__this, offset: 0x50, size: 0x40, def value: None
  ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection _____4__this;

  /// @brief Field <>3__<>4__this, offset: 0x90, size: 0x40, def value: None
  ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection _____3____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, ___includeSelf) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, _____3__includeSelf) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, ___layout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, _____3__layout) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, _____4__this) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, _____3____4__this) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, 0xd0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies System.Exception
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/LayoutNotFoundException
class CORDL_TYPE InputControlLayout_LayoutNotFoundException : public ::System::Exception {
public:
  // Declarations
  /// @brief Field <layout>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__layout_k__BackingField, put = __cordl_internal_set__layout_k__BackingField)) ::StringW _layout_k__BackingField;

  __declspec(property(get = get_layout)) ::StringW layout;

  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* New_ctor();

  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                          ::System::Runtime::Serialization::StreamingContext context);

  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* New_ctor(::StringW name);

  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* New_ctor(::StringW name, ::StringW message);

  constexpr ::StringW const& __cordl_internal_get__layout_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__layout_k__BackingField();

  constexpr void __cordl_internal_set__layout_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x46223cc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4622508, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x4622498, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x46216a0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x4622424, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW message);

  /// @brief Method get_layout, addr 0x46223c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_layout();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlLayout_LayoutNotFoundException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputControlLayout_LayoutNotFoundException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputControlLayout_LayoutNotFoundException(InputControlLayout_LayoutNotFoundException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputControlLayout_LayoutNotFoundException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputControlLayout_LayoutNotFoundException(InputControlLayout_LayoutNotFoundException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7021 };

  /// @brief Field <layout>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::StringW ____layout_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException, ____layout_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException, 0x98>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct CORDL_TYPE InputControlLayout_Cache {
public:
  // Declarations
  /// @brief Method Clear, addr 0x4622588, size 0x8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method FindOrLoadLayout, addr 0x4621aa8, size 0x11c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* FindOrLoadLayout(::StringW name, bool throwIfNotFound);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlLayout_Cache();

  // Ctor Parameters [CppParam { name: "table", ty:
  // "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*", modifiers: "", def_value: None }]
  constexpr InputControlLayout_Cache(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>* table) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7022 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field table, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>* table;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache, table) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies System.IDisposable
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CORDL_TYPE InputControlLayout_CacheRefInstance {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x4622590, size 0x98, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlLayout_CacheRefInstance();

  // Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: None }]
  constexpr InputControlLayout_CacheRefInstance(bool valid) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7023 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field valid, offset: 0x0, size: 0x1, def value: None
  bool valid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance, valid) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance, 0x1>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies System.Object
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/<>c
class CORDL_TYPE InputControlLayout___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::Layouts::InputControlLayout___c* __9;

  /// @brief Field <>9__52_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__52_0, put = setStaticF___9__52_0)) ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* __9__52_0;

  /// @brief Field <>9__75_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__75_0, put = setStaticF___9__75_0)) ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* __9__75_0;

  /// @brief Field <>9__75_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__75_1, put = setStaticF___9__75_1)) ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* __9__75_1;

  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout___c* New_ctor();

  /// @brief Method <CreateControlItemFromMember>b__75_0, addr 0x46226b4, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString _CreateControlItemFromMember_b__75_0(::StringW x);

  /// @brief Method <CreateControlItemFromMember>b__75_1, addr 0x46226dc, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString _CreateControlItemFromMember_b__75_1(::StringW x);

  /// @brief Method <FromType>b__52_0, addr 0x462268c, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString _FromType_b__52_0(::StringW x);

  /// @brief Method .ctor, addr 0x4622684, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout___c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__52_0();

  static inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__75_0();

  static inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__75_1();

  static inline void setStaticF___9(::UnityEngine::InputSystem::Layouts::InputControlLayout___c* value);

  static inline void setStaticF___9__52_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);

  static inline void setStaticF___9__75_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);

  static inline void setStaticF___9__75_1(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlLayout___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputControlLayout___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputControlLayout___c(InputControlLayout___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputControlLayout___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputControlLayout___c(InputControlLayout___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7024 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlLayout___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.InputSystem.Layouts.InputControlLayout::Cache, UnityEngine.InputSystem.Layouts.InputControlLayout::Collection,
// UnityEngine.InputSystem.Layouts.InputControlLayout::Flags, UnityEngine.InputSystem.Utilities.FourCC, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>,
// UnityEngine.InputSystem.Utilities.InternedString
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout
class CORDL_TYPE InputControlLayout : public ::System::Object {
public:
  // Declarations
  using Builder = ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder;

  using Cache = ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache;

  using CacheRefInstance = ::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance;

  using Collection = ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection;

  using ControlItem = ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem;

  using ControlItemJson = ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson;

  using Flags = ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags;

  using LayoutJson = ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson;

  using LayoutJsonNameAndDescriptorOnly = ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJsonNameAndDescriptorOnly;

  using LayoutNotFoundException = ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException;

  using __c = ::UnityEngine::InputSystem::Layouts::InputControlLayout___c;

  __declspec(property(get = get_Item)) ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem Item[];

  __declspec(property(get = get_appliedOverrides)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* appliedOverrides;

  __declspec(property(get = get_baseLayouts)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* baseLayouts;

  __declspec(property(get = get_canRunInBackground, put = set_canRunInBackground)) ::System::Nullable_1<bool> canRunInBackground;

  __declspec(property(get = get_commonUsages)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> commonUsages;

  __declspec(property(get = get_controls)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> controls;

  __declspec(property(get = get_displayName)) ::StringW displayName;

  __declspec(property(get = get_hideInUI, put = set_hideInUI)) bool hideInUI;

  __declspec(property(get = get_isControlLayout)) bool isControlLayout;

  __declspec(property(get = get_isDeviceLayout)) bool isDeviceLayout;

  __declspec(property(get = get_isGenericTypeOfDevice, put = set_isGenericTypeOfDevice)) bool isGenericTypeOfDevice;

  __declspec(property(get = get_isNoisy, put = set_isNoisy)) bool isNoisy;

  __declspec(property(get = get_isOverride, put = set_isOverride)) bool isOverride;

  /// @brief Field m_AppliedOverrides, offset 0x68, size 0x20
  __declspec(property(get = __cordl_internal_get_m_AppliedOverrides,
                      put = __cordl_internal_set_m_AppliedOverrides)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>
      m_AppliedOverrides;

  /// @brief Field m_BaseLayouts, offset 0x48, size 0x20
  __declspec(property(get = __cordl_internal_get_m_BaseLayouts,
                      put = __cordl_internal_set_m_BaseLayouts)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>
      m_BaseLayouts;

  /// @brief Field m_CommonUsages, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommonUsages,
                      put = __cordl_internal_set_m_CommonUsages)) ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>
      m_CommonUsages;

  /// @brief Field m_Controls, offset 0x90, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_Controls,
      put =
          __cordl_internal_set_m_Controls)) ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*>
      m_Controls;

  /// @brief Field m_Description, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Description, put = __cordl_internal_set_m_Description)) ::StringW m_Description;

  /// @brief Field m_DisplayName, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DisplayName, put = __cordl_internal_set_m_DisplayName)) ::StringW m_DisplayName;

  /// @brief Field m_Flags, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags)) ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags m_Flags;

  /// @brief Field m_Name, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name)) ::UnityEngine::InputSystem::Utilities::InternedString m_Name;

  /// @brief Field m_StateFormat, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StateFormat, put = __cordl_internal_set_m_StateFormat)) ::UnityEngine::InputSystem::Utilities::FourCC m_StateFormat;

  /// @brief Field m_StateSizeInBytes, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StateSizeInBytes, put = __cordl_internal_set_m_StateSizeInBytes)) int32_t m_StateSizeInBytes;

  /// @brief Field m_Type, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Type, put = __cordl_internal_set_m_Type)) ::System::Type* m_Type;

  /// @brief Field m_UpdateBeforeRender, offset 0x40, size 0x2
  __declspec(property(get = __cordl_internal_get_m_UpdateBeforeRender, put = __cordl_internal_set_m_UpdateBeforeRender)) ::System::Nullable_1<bool> m_UpdateBeforeRender;

  /// @brief Field m_Variants, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Variants, put = __cordl_internal_set_m_Variants)) ::UnityEngine::InputSystem::Utilities::InternedString m_Variants;

  __declspec(property(get = get_name)) ::UnityEngine::InputSystem::Utilities::InternedString name;

  /// @brief Field s_CacheInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CacheInstance, put = setStaticF_s_CacheInstance)) ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache s_CacheInstance;

  /// @brief Field s_CacheInstanceRef, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CacheInstanceRef, put = setStaticF_s_CacheInstanceRef)) int32_t s_CacheInstanceRef;

  /// @brief Field s_DefaultVariant, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_DefaultVariant, put = setStaticF_s_DefaultVariant)) ::UnityEngine::InputSystem::Utilities::InternedString s_DefaultVariant;

  /// @brief Field s_Layouts, offset 0xffffffff, size 0x40
  __declspec(property(get = getStaticF_s_Layouts, put = setStaticF_s_Layouts)) ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection s_Layouts;

  __declspec(property(get = get_stateFormat)) ::UnityEngine::InputSystem::Utilities::FourCC stateFormat;

  __declspec(property(get = get_stateSizeInBytes)) int32_t stateSizeInBytes;

  __declspec(property(get = get_type)) ::System::Type* type;

  __declspec(property(get = get_updateBeforeRender)) bool updateBeforeRender;

  __declspec(property(get = get_variants)) ::UnityEngine::InputSystem::Utilities::InternedString variants;

  /// @brief Method AddControlItems, addr 0x461aaac, size 0x7c, virtual false, abstract: false, final false
  static inline void AddControlItems(::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* controlLayouts,
                                     ::StringW layoutName);

  /// @brief Method AddControlItemsFromFields, addr 0x461b8f0, size 0x94, virtual false, abstract: false, final false
  static inline void AddControlItemsFromFields(::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* controlLayouts,
                                               ::StringW layoutName);

  /// @brief Method AddControlItemsFromMember, addr 0x461bf34, size 0x270, virtual false, abstract: false, final false
  static inline void AddControlItemsFromMember(::System::Reflection::MemberInfo* member,
                                               ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlAttribute*, ::Array<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>*> attributes,
                                               ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* controlItems);

  /// @brief Method AddControlItemsFromMembers, addr 0x461ba18, size 0x51c, virtual false, abstract: false, final false
  static inline void AddControlItemsFromMembers(::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> members,
                                                ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* controlItems, ::StringW layoutName);

  /// @brief Method AddControlItemsFromProperties, addr 0x461b984, size 0x94, virtual false, abstract: false, final false
  static inline void AddControlItemsFromProperties(::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* controlLayouts,
                                                   ::StringW layoutName);

  /// @brief Method CacheRef, addr 0x461eb64, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance CacheRef();

  /// @brief Method CreateControlItemFromMember, addr 0x461c1a4, size 0x7f8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem CreateControlItemFromMember(::System::Reflection::MemberInfo* member,
                                                                                                                ::UnityEngine::InputSystem::Layouts::InputControlAttribute* attribute);

  /// @brief Method CreateLookupTableForControls, addr 0x461e054, size 0x408, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* CreateLookupTableForControls(
      ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*> controlItems,
      ::System::Collections::Generic::List_1<::StringW>* variants);

  /// @brief Method FindControl, addr 0x461a0f0, size 0x190, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> FindControl(::UnityEngine::InputSystem::Utilities::InternedString path);

  /// @brief Method FindControlIncludingArrayElements, addr 0x461a280, size 0x2e8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> FindControlIncludingArrayElements(::StringW path, ::ByRef<int32_t> arrayIndex);

  /// @brief Method FromJson, addr 0x461af34, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* FromJson(::StringW json);

  /// @brief Method FromType, addr 0x461a608, size 0x4a4, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* FromType(::StringW name, ::System::Type* type);

  /// @brief Method GetValueType, addr 0x461a578, size 0x90, virtual false, abstract: false, final false
  inline ::System::Type* GetValueType();

  /// @brief Method InferLayoutFromValueType, addr 0x461c99c, size 0x1b4, virtual false, abstract: false, final false
  static inline ::StringW InferLayoutFromValueType(::System::Type* type);

  /// @brief Method MergeLayout, addr 0x461ce6c, size 0x11e8, virtual false, abstract: false, final false
  inline void MergeLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* other);

  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* New_ctor(::StringW name, ::System::Type* type);

  /// @brief Method ParseHeaderFieldsFromJson, addr 0x461e988, size 0x184, virtual false, abstract: false, final false
  static inline void ParseHeaderFieldsFromJson(::StringW json, ::ByRef<::UnityEngine::InputSystem::Utilities::InternedString> name,
                                               ::ByRef<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>> baseLayouts,
                                               ::ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> deviceMatcher);

  /// @brief Method ToJson, addr 0x461ab78, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  /// @brief Method VariantsMatch, addr 0x461e7f8, size 0x12c, virtual false, abstract: false, final false
  static inline bool VariantsMatch(::StringW expected, ::StringW actual);

  /// @brief Method VariantsMatch, addr 0x461e924, size 0x64, virtual false, abstract: false, final false
  static inline bool VariantsMatch(::UnityEngine::InputSystem::Utilities::InternedString expected, ::UnityEngine::InputSystem::Utilities::InternedString actual);

  /// @brief Method <MergeLayout>b__77_0, addr 0x461ec44, size 0x74, virtual false, abstract: false, final false
  inline bool _MergeLayout_b__77_0(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem x);

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const& __cordl_internal_get_m_AppliedOverrides() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>& __cordl_internal_get_m_AppliedOverrides();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const& __cordl_internal_get_m_BaseLayouts() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>& __cordl_internal_get_m_BaseLayouts();

  constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> const& __cordl_internal_get_m_CommonUsages() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>& __cordl_internal_get_m_CommonUsages();

  constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*> const&
  __cordl_internal_get_m_Controls() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*>&
  __cordl_internal_get_m_Controls();

  constexpr ::StringW const& __cordl_internal_get_m_Description() const;

  constexpr ::StringW& __cordl_internal_get_m_Description();

  constexpr ::StringW const& __cordl_internal_get_m_DisplayName() const;

  constexpr ::StringW& __cordl_internal_get_m_DisplayName();

  constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags const& __cordl_internal_get_m_Flags() const;

  constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags& __cordl_internal_get_m_Flags();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get_m_Name() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get_m_Name();

  constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& __cordl_internal_get_m_StateFormat() const;

  constexpr ::UnityEngine::InputSystem::Utilities::FourCC& __cordl_internal_get_m_StateFormat();

  constexpr int32_t const& __cordl_internal_get_m_StateSizeInBytes() const;

  constexpr int32_t& __cordl_internal_get_m_StateSizeInBytes();

  constexpr ::System::Type* const& __cordl_internal_get_m_Type() const;

  constexpr ::System::Type*& __cordl_internal_get_m_Type();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_m_UpdateBeforeRender() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get_m_UpdateBeforeRender();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get_m_Variants() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get_m_Variants();

  constexpr void __cordl_internal_set_m_AppliedOverrides(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value);

  constexpr void __cordl_internal_set_m_BaseLayouts(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value);

  constexpr void __cordl_internal_set_m_CommonUsages(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> value);

  constexpr void
  __cordl_internal_set_m_Controls(::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*> value);

  constexpr void __cordl_internal_set_m_Description(::StringW value);

  constexpr void __cordl_internal_set_m_DisplayName(::StringW value);

  constexpr void __cordl_internal_set_m_Flags(::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags value);

  constexpr void __cordl_internal_set_m_Name(::UnityEngine::InputSystem::Utilities::InternedString value);

  constexpr void __cordl_internal_set_m_StateFormat(::UnityEngine::InputSystem::Utilities::FourCC value);

  constexpr void __cordl_internal_set_m_StateSizeInBytes(int32_t value);

  constexpr void __cordl_internal_set_m_Type(::System::Type* value);

  constexpr void __cordl_internal_set_m_UpdateBeforeRender(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set_m_Variants(::UnityEngine::InputSystem::Utilities::InternedString value);

  /// @brief Method .ctor, addr 0x461ab28, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Type* type);

  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache getStaticF_s_CacheInstance();

  static inline int32_t getStaticF_s_CacheInstanceRef();

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_s_DefaultVariant();

  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection getStaticF_s_Layouts();

  /// @brief Method get_DefaultVariant, addr 0x4619ac4, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::InternedString get_DefaultVariant();

  /// @brief Method get_Item, addr 0x4619f78, size 0x178, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem get_Item(::StringW path);

  /// @brief Method get_appliedOverrides, addr 0x4619bcc, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* get_appliedOverrides();

  /// @brief Method get_baseLayouts, addr 0x4619b6c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* get_baseLayouts();

  /// @brief Method get_cache, addr 0x461eb0c, size 0x58, virtual false, abstract: false, final false
  static inline ::ByRef<::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache> get_cache();

  /// @brief Method get_canRunInBackground, addr 0x4619e74, size 0x68, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_canRunInBackground();

  /// @brief Method get_commonUsages, addr 0x4619c2c, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_commonUsages();

  /// @brief Method get_controls, addr 0x4619c8c, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> get_controls();

  /// @brief Method get_displayName, addr 0x4619b28, size 0x20, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_hideInUI, addr 0x4619e1c, size 0xc, virtual false, abstract: false, final false
  inline bool get_hideInUI();

  /// @brief Method get_isControlLayout, addr 0x4619dbc, size 0x18, virtual false, abstract: false, final false
  inline bool get_isControlLayout();

  /// @brief Method get_isDeviceLayout, addr 0x4619d28, size 0x94, virtual false, abstract: false, final false
  inline bool get_isDeviceLayout();

  /// @brief Method get_isGenericTypeOfDevice, addr 0x4619e00, size 0xc, virtual false, abstract: false, final false
  inline bool get_isGenericTypeOfDevice();

  /// @brief Method get_isNoisy, addr 0x4619e48, size 0xc, virtual false, abstract: false, final false
  inline bool get_isNoisy();

  /// @brief Method get_isOverride, addr 0x4619dd4, size 0xc, virtual false, abstract: false, final false
  inline bool get_isOverride();

  /// @brief Method get_name, addr 0x4619b1c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString get_name();

  /// @brief Method get_stateFormat, addr 0x4619b5c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat();

  /// @brief Method get_stateSizeInBytes, addr 0x4619b64, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_stateSizeInBytes();

  /// @brief Method get_type, addr 0x4619b48, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_type();

  /// @brief Method get_updateBeforeRender, addr 0x4619cec, size 0x3c, virtual false, abstract: false, final false
  inline bool get_updateBeforeRender();

  /// @brief Method get_variants, addr 0x4619b50, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString get_variants();

  static inline void setStaticF_s_CacheInstance(::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache value);

  static inline void setStaticF_s_CacheInstanceRef(int32_t value);

  static inline void setStaticF_s_DefaultVariant(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline void setStaticF_s_Layouts(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection value);

  /// @brief Method set_canRunInBackground, addr 0x4619edc, size 0x9c, virtual false, abstract: false, final false
  inline void set_canRunInBackground(::System::Nullable_1<bool> value);

  /// @brief Method set_hideInUI, addr 0x4619e28, size 0x20, virtual false, abstract: false, final false
  inline void set_hideInUI(bool value);

  /// @brief Method set_isGenericTypeOfDevice, addr 0x4619e0c, size 0x10, virtual false, abstract: false, final false
  inline void set_isGenericTypeOfDevice(bool value);

  /// @brief Method set_isNoisy, addr 0x4619e54, size 0x20, virtual false, abstract: false, final false
  inline void set_isNoisy(bool value);

  /// @brief Method set_isOverride, addr 0x4619de0, size 0x20, virtual false, abstract: false, final false
  inline void set_isOverride(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlLayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputControlLayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputControlLayout(InputControlLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputControlLayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputControlLayout(InputControlLayout const&) = delete;

  /// @brief Field VariantSeparator offset 0xffffffff size 0x8
  static constexpr ::ConstString VariantSeparator{ u";" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7025 };

  /// @brief Field m_Name, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString ___m_Name;

  /// @brief Field m_Type, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___m_Type;

  /// @brief Field m_Variants, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString ___m_Variants;

  /// @brief Field m_StateFormat, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Utilities::FourCC ___m_StateFormat;

  /// @brief Field m_StateSizeInBytes, offset: 0x3c, size: 0x4, def value: None
  int32_t ___m_StateSizeInBytes;

  /// @brief Field m_UpdateBeforeRender, offset: 0x40, size: 0x2, def value: None
  ::System::Nullable_1<bool> ___m_UpdateBeforeRender;

  /// @brief Field m_BaseLayouts, offset: 0x48, size: 0x20, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> ___m_BaseLayouts;

  /// @brief Field m_AppliedOverrides, offset: 0x68, size: 0x20, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> ___m_AppliedOverrides;

  /// @brief Field m_CommonUsages, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> ___m_CommonUsages;

  /// @brief Field m_Controls, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*> ___m_Controls;

  /// @brief Field m_DisplayName, offset: 0x98, size: 0x8, def value: None
  ::StringW ___m_DisplayName;

  /// @brief Field m_Description, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___m_Description;

  /// @brief Field m_Flags, offset: 0xa8, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags ___m_Flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_Type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_Variants) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_StateFormat) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_StateSizeInBytes) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_UpdateBeforeRender) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_BaseLayouts) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_AppliedOverrides) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_CommonUsages) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_Controls) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_DisplayName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_Description) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_Flags) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlLayout, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItem/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Flags");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*, "UnityEngine.InputSystem.Layouts",
                       "InputControlLayout/Collection/<GetBaseLayouts>d__24");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Builder/ControlBuilder/<>c");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItemJson/<>c");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::InputControlLayout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayout*, "UnityEngine.InputSystem.Layouts", "InputControlLayout");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Builder");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItemJson");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutNotFoundException");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::InputControlLayout___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayout___c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/<>c");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutJson/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Builder/ControlBuilder");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_LayoutMatcher, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection/LayoutMatcher");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_PrecompiledLayout, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection/PrecompiledLayout");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Cache");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance, "UnityEngine.InputSystem.Layouts", "InputControlLayout/CacheRefInstance");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJsonNameAndDescriptorOnly, "UnityEngine.InputSystem.Layouts",
                       "InputControlLayout/LayoutJsonNameAndDescriptorOnly");
