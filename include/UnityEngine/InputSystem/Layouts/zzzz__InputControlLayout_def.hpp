#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NameAndParameters_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlLayout)
namespace GlobalNamespace {
struct __InputControlLayout__Builder__ControlBuilder;
}
namespace GlobalNamespace {
class __InputControlLayout__Builder__ControlBuilder____c;
}
namespace GlobalNamespace {
struct __InputControlLayout__Collection__LayoutMatcher;
}
namespace GlobalNamespace {
struct __InputControlLayout__Collection__PrecompiledLayout;
}
namespace GlobalNamespace {
class __InputControlLayout__Collection___GetBaseLayouts_d__24;
}
namespace GlobalNamespace {
class __InputControlLayout__ControlItemJson____c;
}
namespace GlobalNamespace {
struct __InputControlLayout__ControlItem__Flags;
}
namespace GlobalNamespace {
class __InputControlLayout__LayoutJson____c;
}
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
class IEnumerable;
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
class IDisposable;
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
class InputControlAttribute;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout__Builder;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__CacheRefInstance;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__Cache;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__Collection;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout__ControlItemJson;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__ControlItem;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__Flags;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__LayoutJsonNameAndDescriptorOnly;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__LayoutJson;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout__LayoutNotFoundException;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout____c;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputDeviceMatcher__MatcherJson;
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
namespace GlobalNamespace {
struct __InputControlLayout__ControlItem__Flags;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__Flags;
}
namespace GlobalNamespace {
class __InputControlLayout__Builder__ControlBuilder____c;
}
namespace GlobalNamespace {
class __InputControlLayout__Collection___GetBaseLayouts_d__24;
}
namespace GlobalNamespace {
class __InputControlLayout__ControlItemJson____c;
}
namespace GlobalNamespace {
class __InputControlLayout__LayoutJson____c;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout__Builder;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout__ControlItemJson;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout__LayoutNotFoundException;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout____c;
}
namespace GlobalNamespace {
struct __InputControlLayout__Builder__ControlBuilder;
}
namespace GlobalNamespace {
struct __InputControlLayout__Collection__LayoutMatcher;
}
namespace GlobalNamespace {
struct __InputControlLayout__Collection__PrecompiledLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__Cache;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__CacheRefInstance;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__Collection;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__ControlItem;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__LayoutJson;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__LayoutJsonNameAndDescriptorOnly;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__InputControlLayout__ControlItem__Flags);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags);
MARK_REF_PTR_T(::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c);
MARK_REF_PTR_T(::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24);
MARK_REF_PTR_T(::GlobalNamespace::__InputControlLayout__ControlItemJson____c);
MARK_REF_PTR_T(::GlobalNamespace::__InputControlLayout__LayoutJson____c);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::InputControlLayout);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout____c);
MARK_VAL_T(::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder);
MARK_VAL_T(::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher);
MARK_VAL_T(::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJsonNameAndDescriptorOnly);
// Type: ::Flags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputControlLayout::ControlItem::Flags
struct CORDL_TYPE __InputControlLayout__ControlItem__Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputControlLayout__ControlItem__Flags_Unwrapped
  enum struct ____InputControlLayout__ControlItem__Flags_Unwrapped : int32_t {
    __E_isModifyingExistingControl = static_cast<int32_t>(0x1),
    __E_IsNoisy = static_cast<int32_t>(0x2),
    __E_IsSynthetic = static_cast<int32_t>(0x4),
    __E_IsFirstDefinedInThisLayout = static_cast<int32_t>(0x8),
    __E_DontReset = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputControlLayout__ControlItem__Flags_Unwrapped() const noexcept {
    return static_cast<____InputControlLayout__ControlItem__Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__ControlItem__Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputControlLayout__ControlItem__Flags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DontReset value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__InputControlLayout__ControlItem__Flags const DontReset;

  /// @brief Field IsFirstDefinedInThisLayout value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__InputControlLayout__ControlItem__Flags const IsFirstDefinedInThisLayout;

  /// @brief Field IsNoisy value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__InputControlLayout__ControlItem__Flags const IsNoisy;

  /// @brief Field IsSynthetic value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__InputControlLayout__ControlItem__Flags const IsSynthetic;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6971 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field isModifyingExistingControl value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__InputControlLayout__ControlItem__Flags const isModifyingExistingControl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlLayout__ControlItem__Flags, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlLayout__ControlItem__Flags, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ControlItem
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 224, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: ::InputControlLayout::ControlItem
struct CORDL_TYPE __InputControlLayout__ControlItem {
public:
  // Declarations
  using Flags = ::GlobalNamespace::__InputControlLayout__ControlItem__Flags;

  __declspec(property(get = get_aliases, put = set_aliases)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> aliases;

  __declspec(property(get = get_arraySize, put = set_arraySize)) int32_t arraySize;

  __declspec(property(get = get_bit, put = set_bit)) uint32_t bit;

  __declspec(property(get = get_defaultState, put = set_defaultState)) ::UnityEngine::InputSystem::Utilities::PrimitiveValue defaultState;

  __declspec(property(get = get_displayName, put = set_displayName)) ::StringW displayName;

  __declspec(property(get = get_dontReset, put = set_dontReset)) bool dontReset;

  __declspec(property(get = get_flags, put = set_flags)) ::GlobalNamespace::__InputControlLayout__ControlItem__Flags flags;

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

  /// @brief Method Merge, addr 0x45a73d0, size 0x39c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem Merge(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem other);

  /// @brief Method get_aliases, addr 0x45a7cac, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_aliases();

  /// @brief Method get_arraySize, addr 0x45a7d38, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_arraySize();

  /// @brief Method get_bit, addr 0x45a7cf8, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_bit();

  /// @brief Method get_defaultState, addr 0x45a7d48, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue get_defaultState();

  /// @brief Method get_displayName, addr 0x45a7c78, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_dontReset, addr 0x45a7da8, size 0xc, virtual false, abstract: false, final false
  inline bool get_dontReset();

  /// @brief Method get_flags, addr 0x45a7d28, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__ControlItem__Flags get_flags();

  /// @brief Method get_format, addr 0x45a7d18, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Method get_isArray, addr 0x45a34dc, size 0x10, virtual false, abstract: false, final false
  inline bool get_isArray();

  /// @brief Method get_isFirstDefinedInThisLayout, addr 0x45a7db4, size 0xc, virtual false, abstract: false, final false
  inline bool get_isFirstDefinedInThisLayout();

  /// @brief Method get_isModifyingExistingControl, addr 0x45a7d84, size 0xc, virtual false, abstract: false, final false
  inline bool get_isModifyingExistingControl();

  /// @brief Method get_isNoisy, addr 0x45a7d90, size 0xc, virtual false, abstract: false, final false
  inline bool get_isNoisy();

  /// @brief Method get_isSynthetic, addr 0x45a7d9c, size 0xc, virtual false, abstract: false, final false
  inline bool get_isSynthetic();

  /// @brief Method get_layout, addr 0x45a7c40, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString get_layout();

  /// @brief Method get_maxValue, addr 0x45a7d70, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue get_maxValue();

  /// @brief Method get_minValue, addr 0x45a7d5c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue get_minValue();

  /// @brief Method get_name, addr 0x45a7c2c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString get_name();

  /// @brief Method get_offset, addr 0x45a7ce8, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_offset();

  /// @brief Method get_parameters, addr 0x45a7cc0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> get_parameters();

  /// @brief Method get_processors, addr 0x45a7cd4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> get_processors();

  /// @brief Method get_shortDisplayName, addr 0x45a7c88, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_shortDisplayName();

  /// @brief Method get_sizeInBits, addr 0x45a7d08, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_sizeInBits();

  /// @brief Method get_usages, addr 0x45a7c98, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_usages();

  /// @brief Method get_useStateFrom, addr 0x45a7c68, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_useStateFrom();

  /// @brief Method get_variants, addr 0x45a7c54, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString get_variants();

  /// @brief Method set_aliases, addr 0x45a7cb8, size 0x8, virtual false, abstract: false, final false
  inline void set_aliases(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value);

  /// @brief Method set_arraySize, addr 0x45a7d40, size 0x8, virtual false, abstract: false, final false
  inline void set_arraySize(int32_t value);

  /// @brief Method set_bit, addr 0x45a7d00, size 0x8, virtual false, abstract: false, final false
  inline void set_bit(uint32_t value);

  /// @brief Method set_defaultState, addr 0x45a7d54, size 0x8, virtual false, abstract: false, final false
  inline void set_defaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method set_displayName, addr 0x45a7c80, size 0x8, virtual false, abstract: false, final false
  inline void set_displayName(::StringW value);

  /// @brief Method set_dontReset, addr 0x45a5b14, size 0x20, virtual false, abstract: false, final false
  inline void set_dontReset(bool value);

  /// @brief Method set_flags, addr 0x45a7d30, size 0x8, virtual false, abstract: false, final false
  inline void set_flags(::GlobalNamespace::__InputControlLayout__ControlItem__Flags value);

  /// @brief Method set_format, addr 0x45a7d20, size 0x8, virtual false, abstract: false, final false
  inline void set_format(::UnityEngine::InputSystem::Utilities::FourCC value);

  /// @brief Method set_isFirstDefinedInThisLayout, addr 0x45a5ad4, size 0x20, virtual false, abstract: false, final false
  inline void set_isFirstDefinedInThisLayout(bool value);

  /// @brief Method set_isModifyingExistingControl, addr 0x45a5ac4, size 0x10, virtual false, abstract: false, final false
  inline void set_isModifyingExistingControl(bool value);

  /// @brief Method set_isNoisy, addr 0x45a5af4, size 0x20, virtual false, abstract: false, final false
  inline void set_isNoisy(bool value);

  /// @brief Method set_isSynthetic, addr 0x45a5b34, size 0x20, virtual false, abstract: false, final false
  inline void set_isSynthetic(bool value);

  /// @brief Method set_layout, addr 0x45a7c4c, size 0x8, virtual false, abstract: false, final false
  inline void set_layout(::UnityEngine::InputSystem::Utilities::InternedString value);

  /// @brief Method set_maxValue, addr 0x45a7d7c, size 0x8, virtual false, abstract: false, final false
  inline void set_maxValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method set_minValue, addr 0x45a7d68, size 0x8, virtual false, abstract: false, final false
  inline void set_minValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method set_name, addr 0x45a7c38, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::UnityEngine::InputSystem::Utilities::InternedString value);

  /// @brief Method set_offset, addr 0x45a7cf0, size 0x8, virtual false, abstract: false, final false
  inline void set_offset(uint32_t value);

  /// @brief Method set_parameters, addr 0x45a7ccc, size 0x8, virtual false, abstract: false, final false
  inline void set_parameters(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> value);

  /// @brief Method set_processors, addr 0x45a7ce0, size 0x8, virtual false, abstract: false, final false
  inline void set_processors(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> value);

  /// @brief Method set_shortDisplayName, addr 0x45a7c90, size 0x8, virtual false, abstract: false, final false
  inline void set_shortDisplayName(::StringW value);

  /// @brief Method set_sizeInBits, addr 0x45a7d10, size 0x8, virtual false, abstract: false, final false
  inline void set_sizeInBits(uint32_t value);

  /// @brief Method set_usages, addr 0x45a7ca4, size 0x8, virtual false, abstract: false, final false
  inline void set_usages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value);

  /// @brief Method set_useStateFrom, addr 0x45a7c70, size 0x8, virtual false, abstract: false, final false
  inline void set_useStateFrom(::StringW value);

  /// @brief Method set_variants, addr 0x45a7c60, size 0x8, virtual false, abstract: false, final false
  inline void set_variants(::UnityEngine::InputSystem::Utilities::InternedString value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__ControlItem();

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
  // "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "_flags_k__BackingField", ty: "::GlobalNamespace::__InputControlLayout__ControlItem__Flags",
  // modifiers: "", def_value: None }, CppParam { name: "_arraySize_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_defaultState_k__BackingField", ty:
  // "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }, CppParam { name: "_minValue_k__BackingField", ty:
  // "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }, CppParam { name: "_maxValue_k__BackingField", ty:
  // "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }]
  constexpr __InputControlLayout__ControlItem(::UnityEngine::InputSystem::Utilities::InternedString _name_k__BackingField,
                                              ::UnityEngine::InputSystem::Utilities::InternedString _layout_k__BackingField,
                                              ::UnityEngine::InputSystem::Utilities::InternedString _variants_k__BackingField, ::StringW _useStateFrom_k__BackingField,
                                              ::StringW _displayName_k__BackingField, ::StringW _shortDisplayName_k__BackingField,
                                              ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> _usages_k__BackingField,
                                              ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> _aliases_k__BackingField,
                                              ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> _parameters_k__BackingField,
                                              ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> _processors_k__BackingField,
                                              uint32_t _offset_k__BackingField, uint32_t _bit_k__BackingField, uint32_t _sizeInBits_k__BackingField,
                                              ::UnityEngine::InputSystem::Utilities::FourCC _format_k__BackingField, ::GlobalNamespace::__InputControlLayout__ControlItem__Flags _flags_k__BackingField,
                                              int32_t _arraySize_k__BackingField, ::UnityEngine::InputSystem::Utilities::PrimitiveValue _defaultState_k__BackingField,
                                              ::UnityEngine::InputSystem::Utilities::PrimitiveValue _minValue_k__BackingField,
                                              ::UnityEngine::InputSystem::Utilities::PrimitiveValue _maxValue_k__BackingField) noexcept;

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
  ::GlobalNamespace::__InputControlLayout__ControlItem__Flags _flags_k__BackingField;

  /// @brief Field <arraySize>k__BackingField, offset: 0x9c, size: 0x4, def value: None
  int32_t _arraySize_k__BackingField;

  /// @brief Field <defaultState>k__BackingField, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::PrimitiveValue _defaultState_k__BackingField;

  /// @brief Field <minValue>k__BackingField, offset: 0xb0, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::PrimitiveValue _minValue_k__BackingField;

  /// @brief Field <maxValue>k__BackingField, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::PrimitiveValue _maxValue_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6972 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xd0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, 0xd0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _name_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _layout_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _variants_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _useStateFrom_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _displayName_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _shortDisplayName_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _usages_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _aliases_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _parameters_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _processors_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _offset_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _bit_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _sizeInBits_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _format_k__BackingField) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _flags_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _arraySize_k__BackingField) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _defaultState_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _minValue_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, _maxValue_k__BackingField) == 0xc0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::InputControlLayout::Builder::ControlBuilder::<>c*
class CORDL_TYPE __InputControlLayout__Builder__ControlBuilder____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0)) ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* __9__14_0;

  static inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c* New_ctor();

  /// @brief Method <WithUsages>b__14_0, addr 0x45a8d44, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString _WithUsages_b__14_0(::StringW x);

  /// @brief Method .ctor, addr 0x45a8d3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__14_0();

  static inline void setStaticF___9(::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c* value);

  static inline void setStaticF___9__14_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__Builder__ControlBuilder____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__Builder__ControlBuilder____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputControlLayout__Builder__ControlBuilder____c(__InputControlLayout__Builder__ControlBuilder____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__Builder__ControlBuilder____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputControlLayout__Builder__ControlBuilder____c(__InputControlLayout__Builder__ControlBuilder____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6973 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ControlBuilder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputControlLayout::Builder::ControlBuilder
struct CORDL_TYPE __InputControlLayout__Builder__ControlBuilder {
public:
  // Declarations
  using __c = ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c;

  /// @brief Method AsArrayOfControlsWithSize, addr 0x45a8c98, size 0x48, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder AsArrayOfControlsWithSize(int32_t arraySize);

  /// @brief Method DontReset, addr 0x45a8624, size 0x60, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder DontReset(bool value);

  /// @brief Method IsNoisy, addr 0x45a85c4, size 0x60, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder IsNoisy(bool value);

  /// @brief Method IsSynthetic, addr 0x45a8564, size 0x60, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder IsSynthetic(bool value);

  /// @brief Method UsingStateFrom, addr 0x45a8c34, size 0x64, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder UsingStateFrom(::StringW path);

  /// @brief Method WithBitOffset, addr 0x45a851c, size 0x48, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithBitOffset(uint32_t bit);

  /// @brief Method WithByteOffset, addr 0x45a84d4, size 0x48, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithByteOffset(uint32_t offset);

  /// @brief Method WithDefaultState, addr 0x45a8bec, size 0x48, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithDefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method WithDisplayName, addr 0x45a8328, size 0x48, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithDisplayName(::StringW displayName);

  /// @brief Method WithFormat, addr 0x45a84a0, size 0x34, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithFormat(::StringW format);

  /// @brief Method WithFormat, addr 0x45a8458, size 0x48, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithFormat(::UnityEngine::InputSystem::Utilities::FourCC format);

  /// @brief Method WithLayout, addr 0x45a8370, size 0xe8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithLayout(::StringW layout);

  /// @brief Method WithParameters, addr 0x45a8a60, size 0xb8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithParameters(::StringW parameters);

  /// @brief Method WithProcessors, addr 0x45a8b18, size 0xd4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithProcessors(::StringW processors);

  /// @brief Method WithRange, addr 0x45a86cc, size 0x9c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithRange(float_t minValue, float_t maxValue);

  /// @brief Method WithSizeInBits, addr 0x45a8684, size 0x48, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithSizeInBits(uint32_t sizeInBits);

  /// @brief Method WithUsages, addr 0x45a8a5c, size 0x4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithUsages(::ArrayW<::StringW, ::Array<::StringW>*> usages);

  /// @brief Method WithUsages, addr 0x45a8768, size 0x1d0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder
  WithUsages(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> usages);

  /// @brief Method WithUsages, addr 0x45a8938, size 0x124, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder WithUsages(::System::Collections::Generic::IEnumerable_1<::StringW>* usages);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__Builder__ControlBuilder();

  // Ctor Parameters [CppParam { name: "builder", ty: "::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr __InputControlLayout__Builder__ControlBuilder(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* builder, int32_t index) noexcept;

  /// @brief Field builder, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* builder;

  /// @brief Field index, offset: 0x8, size: 0x4, def value: None
  int32_t index;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6974 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, builder) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, index) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Builder
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: ::InputControlLayout::Builder*
class CORDL_TYPE __InputControlLayout__Builder : public ::System::Object {
public:
  // Declarations
  using ControlBuilder = ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder;

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

  __declspec(property(get = get_controls)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> controls;

  __declspec(property(get = get_displayName, put = set_displayName)) ::StringW displayName;

  __declspec(property(get = get_extendsLayout, put = set_extendsLayout)) ::StringW extendsLayout;

  /// @brief Field m_ControlCount, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ControlCount, put = __cordl_internal_set_m_ControlCount)) int32_t m_ControlCount;

  /// @brief Field m_Controls, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Controls, put = __cordl_internal_set_m_Controls)) ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,
                                                                                                              ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>
      m_Controls;

  /// @brief Field m_ExtendsLayout, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExtendsLayout, put = __cordl_internal_set_m_ExtendsLayout)) ::StringW m_ExtendsLayout;

  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  __declspec(property(get = get_stateFormat, put = set_stateFormat)) ::UnityEngine::InputSystem::Utilities::FourCC stateFormat;

  __declspec(property(get = get_stateSizeInBytes, put = set_stateSizeInBytes)) int32_t stateSizeInBytes;

  __declspec(property(get = get_type, put = set_type)) ::System::Type* type;

  __declspec(property(get = get_updateBeforeRender, put = set_updateBeforeRender)) ::System::Nullable_1<bool> updateBeforeRender;

  /// @brief Method AddControl, addr 0x45a7ec4, size 0x1a4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder AddControl(::StringW name);

  /// @brief Method Build, addr 0x45a80f4, size 0x22c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* Build();

  /// @brief Method Extend, addr 0x45a80bc, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* Extend(::StringW baseLayoutName);

  static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* New_ctor();

  /// @brief Method WithDisplayName, addr 0x45a8070, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* WithDisplayName(::StringW displayName);

  /// @brief Method WithFormat, addr 0x45a8080, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* WithFormat(::StringW format);

  /// @brief Method WithFormat, addr 0x45a8078, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* WithFormat(::UnityEngine::InputSystem::Utilities::FourCC format);

  /// @brief Method WithName, addr 0x45a8068, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* WithName(::StringW name);

  /// @brief Method WithSizeInBytes, addr 0x45a80b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* WithSizeInBytes(int32_t sizeInBytes);

  /// @brief Method WithType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* WithType();

  constexpr ::StringW const& __cordl_internal_get__displayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__displayName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__name_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& __cordl_internal_get__stateFormat_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Utilities::FourCC& __cordl_internal_get__stateFormat_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__stateSizeInBytes_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__stateSizeInBytes_k__BackingField();

  constexpr ::System::Type*& __cordl_internal_get__type_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__type_k__BackingField() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__updateBeforeRender_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__updateBeforeRender_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_ControlCount() const;

  constexpr int32_t& __cordl_internal_get_m_ControlCount();

  constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> const&
  __cordl_internal_get_m_Controls() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>&
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

  constexpr void __cordl_internal_set_m_Controls(
      ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> value);

  constexpr void __cordl_internal_set_m_ExtendsLayout(::StringW value);

  /// @brief Method .ctor, addr 0x45a8320, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_controls, addr 0x45a7e5c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> get_controls();

  /// @brief Method get_displayName, addr 0x45a7dd0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_extendsLayout, addr 0x45a7e10, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_extendsLayout();

  /// @brief Method get_name, addr 0x45a7dc0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_stateFormat, addr 0x45a7df0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat();

  /// @brief Method get_stateSizeInBytes, addr 0x45a7e00, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_stateSizeInBytes();

  /// @brief Method get_type, addr 0x45a7de0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_type();

  /// @brief Method get_updateBeforeRender, addr 0x45a7e4c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_updateBeforeRender();

  /// @brief Method set_displayName, addr 0x45a7dd8, size 0x8, virtual false, abstract: false, final false
  inline void set_displayName(::StringW value);

  /// @brief Method set_extendsLayout, addr 0x45a7e18, size 0x34, virtual false, abstract: false, final false
  inline void set_extendsLayout(::StringW value);

  /// @brief Method set_name, addr 0x45a7dc8, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_stateFormat, addr 0x45a7df8, size 0x8, virtual false, abstract: false, final false
  inline void set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC value);

  /// @brief Method set_stateSizeInBytes, addr 0x45a7e08, size 0x8, virtual false, abstract: false, final false
  inline void set_stateSizeInBytes(int32_t value);

  /// @brief Method set_type, addr 0x45a7de8, size 0x8, virtual false, abstract: false, final false
  inline void set_type(::System::Type* value);

  /// @brief Method set_updateBeforeRender, addr 0x45a7e54, size 0x8, virtual false, abstract: false, final false
  inline void set_updateBeforeRender(::System::Nullable_1<bool> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__Builder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__Builder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputControlLayout__Builder(__InputControlLayout__Builder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__Builder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputControlLayout__Builder(__InputControlLayout__Builder const&) = delete;

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
  ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> ___m_Controls;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6975 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder, ____name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder, ____displayName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder, ____type_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder, ____stateFormat_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder, ____stateSizeInBytes_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder, ___m_ExtendsLayout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder, ____updateBeforeRender_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder, ___m_ControlCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder, ___m_Controls) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Type: ::Flags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: ::InputControlLayout::Flags
struct CORDL_TYPE __InputControlLayout__Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputControlLayout__Flags_Unwrapped
  enum struct ____InputControlLayout__Flags_Unwrapped : int32_t {
    __E_IsGenericTypeOfDevice = static_cast<int32_t>(0x1),
    __E_HideInUI = static_cast<int32_t>(0x2),
    __E_IsOverride = static_cast<int32_t>(0x4),
    __E_CanRunInBackground = static_cast<int32_t>(0x8),
    __E_CanRunInBackgroundIsSet = static_cast<int32_t>(0x10),
    __E_IsNoisy = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputControlLayout__Flags_Unwrapped() const noexcept {
    return static_cast<____InputControlLayout__Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputControlLayout__Flags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CanRunInBackground value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags const CanRunInBackground;

  /// @brief Field CanRunInBackgroundIsSet value: static_cast<int32_t>(0x10)
  static ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags const CanRunInBackgroundIsSet;

  /// @brief Field HideInUI value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags const HideInUI;

  /// @brief Field IsGenericTypeOfDevice value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags const IsGenericTypeOfDevice;

  /// @brief Field IsNoisy value: static_cast<int32_t>(0x20)
  static ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags const IsNoisy;

  /// @brief Field IsOverride value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags const IsOverride;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6976 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Type: ::LayoutJsonNameAndDescriptorOnly
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: ::InputControlLayout::LayoutJsonNameAndDescriptorOnly
struct CORDL_TYPE __InputControlLayout__LayoutJsonNameAndDescriptorOnly {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__LayoutJsonNameAndDescriptorOnly();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "extendMultiple", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "device", ty:
  // "::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson", modifiers: "", def_value: None }]
  constexpr __InputControlLayout__LayoutJsonNameAndDescriptorOnly(::StringW name, ::StringW extend, ::ArrayW<::StringW, ::Array<::StringW>*> extendMultiple,
                                                                  ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson device) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field extend, offset: 0x8, size: 0x8, def value: None
  ::StringW extend;

  /// @brief Field extendMultiple, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> extendMultiple;

  /// @brief Field device, offset: 0x18, size: 0x58, def value: None
  ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson device;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6977 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJsonNameAndDescriptorOnly, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJsonNameAndDescriptorOnly, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJsonNameAndDescriptorOnly, extend) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJsonNameAndDescriptorOnly, extendMultiple) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJsonNameAndDescriptorOnly, device) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::InputControlLayout::LayoutJson::<>c*
class CORDL_TYPE __InputControlLayout__LayoutJson____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__InputControlLayout__LayoutJson____c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0)) ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* __9__14_0;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* __9__15_0;

  /// @brief Field <>9__15_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_1, put = setStaticF___9__15_1)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* __9__15_1;

  static inline ::GlobalNamespace::__InputControlLayout__LayoutJson____c* New_ctor();

  /// @brief Method <FromLayout>b__15_0, addr 0x45a9b04, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _FromLayout_b__15_0(::UnityEngine::InputSystem::Utilities::InternedString x);

  /// @brief Method <FromLayout>b__15_1, addr 0x45a9b28, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _FromLayout_b__15_1(::UnityEngine::InputSystem::Utilities::InternedString x);

  /// @brief Method <ToLayout>b__14_0, addr 0x45a9adc, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__14_0(::StringW x);

  /// @brief Method .ctor, addr 0x45a9ad4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__InputControlLayout__LayoutJson____c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__14_0();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* getStaticF___9__15_0();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* getStaticF___9__15_1();

  static inline void setStaticF___9(::GlobalNamespace::__InputControlLayout__LayoutJson____c* value);

  static inline void setStaticF___9__14_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);

  static inline void setStaticF___9__15_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value);

  static inline void setStaticF___9__15_1(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__LayoutJson____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__LayoutJson____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputControlLayout__LayoutJson____c(__InputControlLayout__LayoutJson____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__LayoutJson____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputControlLayout__LayoutJson____c(__InputControlLayout__LayoutJson____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6978 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlLayout__LayoutJson____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LayoutJson
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: ::InputControlLayout::LayoutJson
struct CORDL_TYPE __InputControlLayout__LayoutJson {
public:
  // Declarations
  using __c = ::GlobalNamespace::__InputControlLayout__LayoutJson____c;

  /// @brief Method FromLayout, addr 0x45a3b68, size 0x340, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson FromLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout);

  /// @brief Method ToLayout, addr 0x45a3f18, size 0x94c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* ToLayout();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__LayoutJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "extendMultiple", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "beforeRender", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "runInBackground", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "commonUsages", ty:
  // "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "description", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "variant", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "isGenericTypeOfDevice", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hideInUI", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "controls", ty: "::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>*>",
  // modifiers: "", def_value: None }]
  constexpr __InputControlLayout__LayoutJson(
      ::StringW name, ::StringW extend, ::ArrayW<::StringW, ::Array<::StringW>*> extendMultiple, ::StringW format, ::StringW beforeRender, ::StringW runInBackground,
      ::ArrayW<::StringW, ::Array<::StringW>*> commonUsages, ::StringW displayName, ::StringW description, ::StringW type, ::StringW variant, bool isGenericTypeOfDevice, bool hideInUI,
      ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>*> controls) noexcept;

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
  ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>*> controls;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6979 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, extend) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, extendMultiple) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, format) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, beforeRender) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, runInBackground) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, commonUsages) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, displayName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, description) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, type) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, variant) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, isGenericTypeOfDevice) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, hideInUI) == 0x59, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, controls) == 0x60, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::InputControlLayout::ControlItemJson::<>c*
class CORDL_TYPE __InputControlLayout__ControlItemJson____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__InputControlLayout__ControlItemJson____c* __9;

  /// @brief Field <>9__24_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__24_0, put = setStaticF___9__24_0)) ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* __9__24_0;

  /// @brief Field <>9__24_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__24_1, put = setStaticF___9__24_1)) ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* __9__24_1;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* __9__25_0;

  /// @brief Field <>9__25_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_1, put = setStaticF___9__25_1)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::StringW>* __9__25_1;

  /// @brief Field <>9__25_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_2, put = setStaticF___9__25_2)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* __9__25_2;

  /// @brief Field <>9__25_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_3, put = setStaticF___9__25_3)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* __9__25_3;

  static inline ::GlobalNamespace::__InputControlLayout__ControlItemJson____c* New_ctor();

  /// @brief Method <FromControlItems>b__25_0, addr 0x45a9c20, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _FromControlItems_b__25_0(::UnityEngine::InputSystem::Utilities::NamedValue x);

  /// @brief Method <FromControlItems>b__25_1, addr 0x45a9c2c, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _FromControlItems_b__25_1(::UnityEngine::InputSystem::Utilities::NameAndParameters x);

  /// @brief Method <FromControlItems>b__25_2, addr 0x45a9c38, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _FromControlItems_b__25_2(::UnityEngine::InputSystem::Utilities::InternedString x);

  /// @brief Method <FromControlItems>b__25_3, addr 0x45a9c5c, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _FromControlItems_b__25_3(::UnityEngine::InputSystem::Utilities::InternedString x);

  /// @brief Method <ToLayout>b__24_0, addr 0x45a9bd0, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__24_0(::StringW x);

  /// @brief Method <ToLayout>b__24_1, addr 0x45a9bf8, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__24_1(::StringW x);

  /// @brief Method .ctor, addr 0x45a9bc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__InputControlLayout__ControlItemJson____c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__24_0();

  static inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__24_1();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* getStaticF___9__25_0();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::StringW>* getStaticF___9__25_1();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* getStaticF___9__25_2();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* getStaticF___9__25_3();

  static inline void setStaticF___9(::GlobalNamespace::__InputControlLayout__ControlItemJson____c* value);

  static inline void setStaticF___9__24_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);

  static inline void setStaticF___9__24_1(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);

  static inline void setStaticF___9__25_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* value);

  static inline void setStaticF___9__25_1(::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::StringW>* value);

  static inline void setStaticF___9__25_2(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value);

  static inline void setStaticF___9__25_3(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__ControlItemJson____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__ControlItemJson____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputControlLayout__ControlItemJson____c(__InputControlLayout__ControlItemJson____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__ControlItemJson____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputControlLayout__ControlItemJson____c(__InputControlLayout__ControlItemJson____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6980 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlLayout__ControlItemJson____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ControlItemJson
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: ::InputControlLayout::ControlItemJson*
class CORDL_TYPE __InputControlLayout__ControlItemJson : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__InputControlLayout__ControlItemJson____c;

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

  /// @brief Method FromControlItems, addr 0x45a93ac, size 0x6cc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>*>
  FromControlItems(::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> items);

  static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson* New_ctor();

  /// @brief Method ToLayout, addr 0x45a8d6c, size 0x640, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem ToLayout();

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

  /// @brief Method .ctor, addr 0x45a9b4c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__ControlItemJson();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__ControlItemJson", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputControlLayout__ControlItemJson(__InputControlLayout__ControlItemJson&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__ControlItemJson", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputControlLayout__ControlItemJson(__InputControlLayout__ControlItemJson const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6981 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, 0xb0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___layout) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___variants) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___usage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___alias) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___useStateFrom) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___offset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___bit) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___sizeInBits) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___format) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___arraySize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___usages) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___aliases) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___parameters) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___processors) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___displayName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___shortDisplayName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___noisy) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___dontReset) == 0x91, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___synthetic) == 0x92, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___defaultState) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___minValue) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson, ___maxValue) == 0xa8, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Type: ::LayoutMatcher
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputControlLayout::Collection::LayoutMatcher
struct CORDL_TYPE __InputControlLayout__Collection__LayoutMatcher {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__Collection__LayoutMatcher();

  // Ctor Parameters [CppParam { name: "layoutName", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "deviceMatcher", ty:
  // "::UnityEngine::InputSystem::Layouts::InputDeviceMatcher", modifiers: "", def_value: None }]
  constexpr __InputControlLayout__Collection__LayoutMatcher(::UnityEngine::InputSystem::Utilities::InternedString layoutName,
                                                            ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher deviceMatcher) noexcept;

  /// @brief Field layoutName, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString layoutName;

  /// @brief Field deviceMatcher, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher deviceMatcher;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6982 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher, layoutName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher, deviceMatcher) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PrecompiledLayout
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputControlLayout::Collection::PrecompiledLayout
struct CORDL_TYPE __InputControlLayout__Collection__PrecompiledLayout {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__Collection__PrecompiledLayout();

  // Ctor Parameters [CppParam { name: "factoryMethod", ty: "::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*", modifiers: "", def_value: None }, CppParam { name: "metadata", ty:
  // "::StringW", modifiers: "", def_value: None }]
  constexpr __InputControlLayout__Collection__PrecompiledLayout(::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* factoryMethod, ::StringW metadata) noexcept;

  /// @brief Field factoryMethod, offset: 0x0, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* factoryMethod;

  /// @brief Field metadata, offset: 0x8, size: 0x8, def value: None
  ::StringW metadata;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6983 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout, factoryMethod) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout, metadata) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Collection
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: ::InputControlLayout::Collection
struct CORDL_TYPE __InputControlLayout__Collection {
public:
  // Declarations
  using LayoutMatcher = ::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher;

  using PrecompiledLayout = ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout;

  using _GetBaseLayouts_d__24 = ::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24;

  /// @brief Method AddMatcher, addr 0x45aaf98, size 0x178, virtual false, abstract: false, final false
  inline void AddMatcher(::UnityEngine::InputSystem::Utilities::InternedString layout, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher);

  /// @brief Method Allocate, addr 0x45a9c80, size 0x24c, virtual false, abstract: false, final false
  inline void Allocate();

  /// @brief Method ComputeDistanceInInheritanceHierarchy, addr 0x45aa7f0, size 0x134, virtual false, abstract: false, final false
  inline bool ComputeDistanceInInheritanceHierarchy(::UnityEngine::InputSystem::Utilities::InternedString firstLayout, ::UnityEngine::InputSystem::Utilities::InternedString secondLayout,
                                                    ByRef<int32_t> distance);

  /// @brief Method FindLayoutThatIntroducesControl, addr 0x45aa924, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString FindLayoutThatIntroducesControl(::UnityEngine::InputSystem::InputControl* control,
                                                                                               ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache cache);

  /// @brief Method GetBaseLayoutName, addr 0x45aa6d0, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString GetBaseLayoutName(::UnityEngine::InputSystem::Utilities::InternedString layoutName);

  /// @brief Method GetBaseLayouts, addr 0x45aae14, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* GetBaseLayouts(::UnityEngine::InputSystem::Utilities::InternedString layout,
                                                                                                                              bool includeSelf);

  /// @brief Method GetControlTypeForLayout, addr 0x45aab38, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Type* GetControlTypeForLayout(::UnityEngine::InputSystem::Utilities::InternedString layoutName);

  /// @brief Method GetRootLayoutName, addr 0x45aa75c, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString GetRootLayoutName(::UnityEngine::InputSystem::Utilities::InternedString layoutName);

  /// @brief Method HasLayout, addr 0x45a5d04, size 0xdc, virtual false, abstract: false, final false
  inline bool HasLayout(::UnityEngine::InputSystem::Utilities::InternedString name);

  /// @brief Method IsBasedOn, addr 0x45aaeec, size 0xac, virtual false, abstract: false, final false
  inline bool IsBasedOn(::UnityEngine::InputSystem::Utilities::InternedString parentLayout, ::UnityEngine::InputSystem::Utilities::InternedString childLayout);

  /// @brief Method IsGeneratedLayout, addr 0x45aadac, size 0x68, virtual false, abstract: false, final false
  inline bool IsGeneratedLayout(::UnityEngine::InputSystem::Utilities::InternedString layout);

  /// @brief Method TryFindLayoutForType, addr 0x45a5b54, size 0x1b0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString TryFindLayoutForType(::System::Type* layoutType);

  /// @brief Method TryFindMatchingLayout, addr 0x45a9ecc, size 0x1d0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString TryFindMatchingLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription);

  /// @brief Method TryLoadLayout, addr 0x45aa290, size 0x384, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout*
  TryLoadLayout(::UnityEngine::InputSystem::Utilities::InternedString name,
                ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>* table);

  /// @brief Method TryLoadLayoutInternal, addr 0x45aa09c, size 0x1f4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadLayoutInternal(::UnityEngine::InputSystem::Utilities::InternedString name);

  /// @brief Method ValueTypeIsAssignableFrom, addr 0x45aac84, size 0x128, virtual false, abstract: false, final false
  inline bool ValueTypeIsAssignableFrom(::UnityEngine::InputSystem::Utilities::InternedString layoutName, ::System::Type* valueType);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__Collection();

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
  // "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>*", modifiers: "",
  // def_value: None }, CppParam { name: "layoutMatchers", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher>*", modifiers: "", def_value:
  // None }]
  constexpr __InputControlLayout__Collection(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>* layoutTypes,
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* layoutStrings,
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>* layoutBuilders,
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString>* baseLayoutTable,
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,
                                                   ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>>* layoutOverrides,
      ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>* layoutOverrideNames,
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>* precompiledLayouts,
      ::System::Collections::Generic::List_1<::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher>* layoutMatchers) noexcept;

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
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>* precompiledLayouts;

  /// @brief Field layoutMatchers, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher>* layoutMatchers;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6985 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field kBaseScoreForNonGeneratedLayouts offset 0xffffffff size 0x4
  static constexpr float_t kBaseScoreForNonGeneratedLayouts{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection, layoutTypes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection, layoutStrings) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection, layoutBuilders) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection, baseLayoutTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection, layoutOverrides) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection, layoutOverrideNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection, precompiledLayouts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection, layoutMatchers) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Type: ::<GetBaseLayouts>d__24
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::InputControlLayout::Collection::<GetBaseLayouts>d__24*
class CORDL_TYPE __InputControlLayout__Collection___GetBaseLayouts_d__24 : public ::System::Object {
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
  __declspec(property(get = __cordl_internal_get___3____4__this, put = __cordl_internal_set___3____4__this)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection __3____4__this;

  /// @brief Field <>3__includeSelf, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get___3__includeSelf, put = __cordl_internal_set___3__includeSelf)) bool __3__includeSelf;

  /// @brief Field <>3__layout, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get___3__layout, put = __cordl_internal_set___3__layout)) ::UnityEngine::InputSystem::Utilities::InternedString __3__layout;

  /// @brief Field <>4__this, offset 0x50, size 0x40
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection __4__this;

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

  /// @brief Method MoveNext, addr 0x45ab114, size 0xbc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.InternedString>.GetEnumerator, addr 0x45ab270, size 0xc4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*
  System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.InternedString>.get_Current, addr 0x45ab1d0, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::InternedString System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x45ab334, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x45ab1dc, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x45ab214, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x45ab110, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get___2__current();

  constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection const& __cordl_internal_get___3____4__this() const;

  constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection& __cordl_internal_get___3____4__this();

  constexpr bool const& __cordl_internal_get___3__includeSelf() const;

  constexpr bool& __cordl_internal_get___3__includeSelf();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get___3__layout() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get___3__layout();

  constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr bool const& __cordl_internal_get_includeSelf() const;

  constexpr bool& __cordl_internal_get_includeSelf();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get_layout() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get_layout();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::InputSystem::Utilities::InternedString value);

  constexpr void __cordl_internal_set___3____4__this(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection value);

  constexpr void __cordl_internal_set___3__includeSelf(bool value);

  constexpr void __cordl_internal_set___3__layout(::UnityEngine::InputSystem::Utilities::InternedString value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_includeSelf(bool value);

  constexpr void __cordl_internal_set_layout(::UnityEngine::InputSystem::Utilities::InternedString value);

  /// @brief Method .ctor, addr 0x45aaeb8, size 0x34, virtual false, abstract: false, final false
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
  constexpr __InputControlLayout__Collection___GetBaseLayouts_d__24();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__Collection___GetBaseLayouts_d__24", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputControlLayout__Collection___GetBaseLayouts_d__24(__InputControlLayout__Collection___GetBaseLayouts_d__24&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__Collection___GetBaseLayouts_d__24", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputControlLayout__Collection___GetBaseLayouts_d__24(__InputControlLayout__Collection___GetBaseLayouts_d__24 const&) = delete;

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
  ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection _____4__this;

  /// @brief Field <>3__<>4__this, offset: 0x90, size: 0x40, def value: None
  ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection _____3____4__this;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6984 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24, 0xd0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24, ___includeSelf) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24, _____3__includeSelf) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24, ___layout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24, _____3__layout) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24, _____4__this) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24, _____3____4__this) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LayoutNotFoundException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: ::InputControlLayout::LayoutNotFoundException*
class CORDL_TYPE __InputControlLayout__LayoutNotFoundException : public ::System::Exception {
public:
  // Declarations
  /// @brief Field <layout>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__layout_k__BackingField, put = __cordl_internal_set__layout_k__BackingField)) ::StringW _layout_k__BackingField;

  __declspec(property(get = get_layout)) ::StringW layout;

  static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException* New_ctor();

  static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                             ::System::Runtime::Serialization::StreamingContext context);

  static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException* New_ctor(::StringW name);

  static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException* New_ctor(::StringW name, ::StringW message);

  constexpr ::StringW const& __cordl_internal_get__layout_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__layout_k__BackingField();

  constexpr void __cordl_internal_set__layout_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x45ab340, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x45ab47c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x45ab40c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x45aa614, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x45ab398, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW message);

  /// @brief Method get_layout, addr 0x45ab338, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_layout();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__LayoutNotFoundException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__LayoutNotFoundException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputControlLayout__LayoutNotFoundException(__InputControlLayout__LayoutNotFoundException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout__LayoutNotFoundException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputControlLayout__LayoutNotFoundException(__InputControlLayout__LayoutNotFoundException const&) = delete;

  /// @brief Field <layout>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::StringW ____layout_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6986 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException, ____layout_k__BackingField) == 0x90, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Type: ::Cache
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: ::InputControlLayout::Cache
struct CORDL_TYPE __InputControlLayout__Cache {
public:
  // Declarations
  /// @brief Method Clear, addr 0x45ab4fc, size 0x8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method FindOrLoadLayout, addr 0x45aaa1c, size 0x11c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* FindOrLoadLayout(::StringW name, bool throwIfNotFound);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__Cache();

  // Ctor Parameters [CppParam { name: "table", ty:
  // "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*", modifiers: "", def_value: None }]
  constexpr __InputControlLayout__Cache(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>* table) noexcept;

  /// @brief Field table, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>* table;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6987 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache, table) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Type: ::CacheRefInstance
// SizeInfo { instance_size: 1, native_size: 4, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: ::InputControlLayout::CacheRefInstance
struct CORDL_TYPE __InputControlLayout__CacheRefInstance {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x45ab504, size 0x98, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout__CacheRefInstance();

  // Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: None }]
  constexpr __InputControlLayout__CacheRefInstance(bool valid) noexcept;

  /// @brief Field valid, offset: 0x0, size: 0x1, def value: None
  bool valid;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6988 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance, 0x1>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance, valid) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: ::InputControlLayout::<>c*
class CORDL_TYPE __InputControlLayout____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c* __9;

  /// @brief Field <>9__52_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__52_0, put = setStaticF___9__52_0)) ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* __9__52_0;

  /// @brief Field <>9__75_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__75_0, put = setStaticF___9__75_0)) ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* __9__75_0;

  /// @brief Field <>9__75_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__75_1, put = setStaticF___9__75_1)) ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* __9__75_1;

  static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c* New_ctor();

  /// @brief Method <CreateControlItemFromMember>b__75_0, addr 0x45ab628, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString _CreateControlItemFromMember_b__75_0(::StringW x);

  /// @brief Method <CreateControlItemFromMember>b__75_1, addr 0x45ab650, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString _CreateControlItemFromMember_b__75_1(::StringW x);

  /// @brief Method <FromType>b__52_0, addr 0x45ab600, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString _FromType_b__52_0(::StringW x);

  /// @brief Method .ctor, addr 0x45ab5f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__52_0();

  static inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__75_0();

  static inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__75_1();

  static inline void setStaticF___9(::UnityEngine::InputSystem::Layouts::__InputControlLayout____c* value);

  static inline void setStaticF___9__52_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);

  static inline void setStaticF___9__75_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);

  static inline void setStaticF___9__75_1(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlLayout____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputControlLayout____c(__InputControlLayout____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputControlLayout____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputControlLayout____c(__InputControlLayout____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6989 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Type: UnityEngine.InputSystem.Layouts::InputControlLayout
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 172, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Layouts::InputControlLayout*
class CORDL_TYPE InputControlLayout : public ::System::Object {
public:
  // Declarations
  using Builder = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder;

  using Cache = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache;

  using CacheRefInstance = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance;

  using Collection = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection;

  using ControlItem = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem;

  using ControlItemJson = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson;

  using Flags = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags;

  using LayoutJson = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson;

  using LayoutJsonNameAndDescriptorOnly = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJsonNameAndDescriptorOnly;

  using LayoutNotFoundException = ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException;

  using __c = ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c;

  __declspec(property(get = get_Item)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem Item[];

  __declspec(property(get = get_appliedOverrides)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* appliedOverrides;

  __declspec(property(get = get_baseLayouts)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* baseLayouts;

  __declspec(property(get = get_canRunInBackground, put = set_canRunInBackground)) ::System::Nullable_1<bool> canRunInBackground;

  __declspec(property(get = get_commonUsages)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> commonUsages;

  __declspec(property(get = get_controls)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> controls;

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
  __declspec(property(get = __cordl_internal_get_m_Controls, put = __cordl_internal_set_m_Controls)) ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,
                                                                                                              ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>
      m_Controls;

  /// @brief Field m_Description, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Description, put = __cordl_internal_set_m_Description)) ::StringW m_Description;

  /// @brief Field m_DisplayName, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DisplayName, put = __cordl_internal_set_m_DisplayName)) ::StringW m_DisplayName;

  /// @brief Field m_Flags, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags m_Flags;

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
  static __declspec(property(get = getStaticF_s_CacheInstance, put = setStaticF_s_CacheInstance)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache s_CacheInstance;

  /// @brief Field s_CacheInstanceRef, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_CacheInstanceRef, put = setStaticF_s_CacheInstanceRef)) int32_t s_CacheInstanceRef;

  /// @brief Field s_DefaultVariant, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_DefaultVariant, put = setStaticF_s_DefaultVariant)) ::UnityEngine::InputSystem::Utilities::InternedString s_DefaultVariant;

  /// @brief Field s_Layouts, offset 0xffffffff, size 0x40
  static __declspec(property(get = getStaticF_s_Layouts, put = setStaticF_s_Layouts)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection s_Layouts;

  __declspec(property(get = get_stateFormat)) ::UnityEngine::InputSystem::Utilities::FourCC stateFormat;

  __declspec(property(get = get_stateSizeInBytes)) int32_t stateSizeInBytes;

  __declspec(property(get = get_type)) ::System::Type* type;

  __declspec(property(get = get_updateBeforeRender)) bool updateBeforeRender;

  __declspec(property(get = get_variants)) ::UnityEngine::InputSystem::Utilities::InternedString variants;

  /// @brief Method AddControlItems, addr 0x45a3a20, size 0x7c, virtual false, abstract: false, final false
  static inline void AddControlItems(::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* controlLayouts,
                                     ::StringW layoutName);

  /// @brief Method AddControlItemsFromFields, addr 0x45a4864, size 0x94, virtual false, abstract: false, final false
  static inline void AddControlItemsFromFields(::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* controlLayouts,
                                               ::StringW layoutName);

  /// @brief Method AddControlItemsFromMember, addr 0x45a4ea8, size 0x270, virtual false, abstract: false, final false
  static inline void AddControlItemsFromMember(::System::Reflection::MemberInfo* member,
                                               ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlAttribute*, ::Array<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>*> attributes,
                                               ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* controlItems);

  /// @brief Method AddControlItemsFromMembers, addr 0x45a498c, size 0x51c, virtual false, abstract: false, final false
  static inline void AddControlItemsFromMembers(::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> members,
                                                ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* controlItems, ::StringW layoutName);

  /// @brief Method AddControlItemsFromProperties, addr 0x45a48f8, size 0x94, virtual false, abstract: false, final false
  static inline void AddControlItemsFromProperties(::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* controlLayouts,
                                                   ::StringW layoutName);

  /// @brief Method CacheRef, addr 0x45a7ad8, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance CacheRef();

  /// @brief Method CreateControlItemFromMember, addr 0x45a5118, size 0x7f8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem CreateControlItemFromMember(::System::Reflection::MemberInfo* member,
                                                                                                                   ::UnityEngine::InputSystem::Layouts::InputControlAttribute* attribute);

  /// @brief Method CreateLookupTableForControls, addr 0x45a6fc8, size 0x408, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* CreateLookupTableForControls(
      ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> controlItems,
      ::System::Collections::Generic::List_1<::StringW>* variants);

  /// @brief Method FindControl, addr 0x45a3064, size 0x190, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> FindControl(::UnityEngine::InputSystem::Utilities::InternedString path);

  /// @brief Method FindControlIncludingArrayElements, addr 0x45a31f4, size 0x2e8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> FindControlIncludingArrayElements(::StringW path, ByRef<int32_t> arrayIndex);

  /// @brief Method FromJson, addr 0x45a3ea8, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* FromJson(::StringW json);

  /// @brief Method FromType, addr 0x45a357c, size 0x4a4, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* FromType(::StringW name, ::System::Type* type);

  /// @brief Method GetValueType, addr 0x45a34ec, size 0x90, virtual false, abstract: false, final false
  inline ::System::Type* GetValueType();

  /// @brief Method InferLayoutFromValueType, addr 0x45a5910, size 0x1b4, virtual false, abstract: false, final false
  static inline ::StringW InferLayoutFromValueType(::System::Type* type);

  /// @brief Method MergeLayout, addr 0x45a5de0, size 0x11e8, virtual false, abstract: false, final false
  inline void MergeLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* other);

  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* New_ctor(::StringW name, ::System::Type* type);

  /// @brief Method ParseHeaderFieldsFromJson, addr 0x45a78fc, size 0x184, virtual false, abstract: false, final false
  static inline void ParseHeaderFieldsFromJson(::StringW json, ByRef<::UnityEngine::InputSystem::Utilities::InternedString> name,
                                               ByRef<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>> baseLayouts,
                                               ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> deviceMatcher);

  /// @brief Method ToJson, addr 0x45a3aec, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  /// @brief Method VariantsMatch, addr 0x45a776c, size 0x12c, virtual false, abstract: false, final false
  static inline bool VariantsMatch(::StringW expected, ::StringW actual);

  /// @brief Method VariantsMatch, addr 0x45a7898, size 0x64, virtual false, abstract: false, final false
  static inline bool VariantsMatch(::UnityEngine::InputSystem::Utilities::InternedString expected, ::UnityEngine::InputSystem::Utilities::InternedString actual);

  /// @brief Method <MergeLayout>b__77_0, addr 0x45a7bb8, size 0x74, virtual false, abstract: false, final false
  inline bool _MergeLayout_b__77_0(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem x);

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const& __cordl_internal_get_m_AppliedOverrides() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>& __cordl_internal_get_m_AppliedOverrides();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const& __cordl_internal_get_m_BaseLayouts() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>& __cordl_internal_get_m_BaseLayouts();

  constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> const& __cordl_internal_get_m_CommonUsages() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>& __cordl_internal_get_m_CommonUsages();

  constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> const&
  __cordl_internal_get_m_Controls() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>&
  __cordl_internal_get_m_Controls();

  constexpr ::StringW const& __cordl_internal_get_m_Description() const;

  constexpr ::StringW& __cordl_internal_get_m_Description();

  constexpr ::StringW const& __cordl_internal_get_m_DisplayName() const;

  constexpr ::StringW& __cordl_internal_get_m_DisplayName();

  constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags const& __cordl_internal_get_m_Flags() const;

  constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags& __cordl_internal_get_m_Flags();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get_m_Name() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get_m_Name();

  constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& __cordl_internal_get_m_StateFormat() const;

  constexpr ::UnityEngine::InputSystem::Utilities::FourCC& __cordl_internal_get_m_StateFormat();

  constexpr int32_t const& __cordl_internal_get_m_StateSizeInBytes() const;

  constexpr int32_t& __cordl_internal_get_m_StateSizeInBytes();

  constexpr ::System::Type*& __cordl_internal_get_m_Type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_m_Type() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_m_UpdateBeforeRender() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get_m_UpdateBeforeRender();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get_m_Variants() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get_m_Variants();

  constexpr void __cordl_internal_set_m_AppliedOverrides(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value);

  constexpr void __cordl_internal_set_m_BaseLayouts(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value);

  constexpr void __cordl_internal_set_m_CommonUsages(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> value);

  constexpr void __cordl_internal_set_m_Controls(
      ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> value);

  constexpr void __cordl_internal_set_m_Description(::StringW value);

  constexpr void __cordl_internal_set_m_DisplayName(::StringW value);

  constexpr void __cordl_internal_set_m_Flags(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags value);

  constexpr void __cordl_internal_set_m_Name(::UnityEngine::InputSystem::Utilities::InternedString value);

  constexpr void __cordl_internal_set_m_StateFormat(::UnityEngine::InputSystem::Utilities::FourCC value);

  constexpr void __cordl_internal_set_m_StateSizeInBytes(int32_t value);

  constexpr void __cordl_internal_set_m_Type(::System::Type* value);

  constexpr void __cordl_internal_set_m_UpdateBeforeRender(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set_m_Variants(::UnityEngine::InputSystem::Utilities::InternedString value);

  /// @brief Method .ctor, addr 0x45a3a9c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Type* type);

  static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache getStaticF_s_CacheInstance();

  static inline int32_t getStaticF_s_CacheInstanceRef();

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_s_DefaultVariant();

  static inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection getStaticF_s_Layouts();

  /// @brief Method get_DefaultVariant, addr 0x45a2a38, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::InternedString get_DefaultVariant();

  /// @brief Method get_Item, addr 0x45a2eec, size 0x178, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem get_Item(::StringW path);

  /// @brief Method get_appliedOverrides, addr 0x45a2b40, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* get_appliedOverrides();

  /// @brief Method get_baseLayouts, addr 0x45a2ae0, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* get_baseLayouts();

  /// @brief Method get_cache, addr 0x45a7a80, size 0x58, virtual false, abstract: false, final false
  static inline ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache> get_cache();

  /// @brief Method get_canRunInBackground, addr 0x45a2de8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_canRunInBackground();

  /// @brief Method get_commonUsages, addr 0x45a2ba0, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_commonUsages();

  /// @brief Method get_controls, addr 0x45a2c00, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> get_controls();

  /// @brief Method get_displayName, addr 0x45a2a9c, size 0x20, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_hideInUI, addr 0x45a2d90, size 0xc, virtual false, abstract: false, final false
  inline bool get_hideInUI();

  /// @brief Method get_isControlLayout, addr 0x45a2d30, size 0x18, virtual false, abstract: false, final false
  inline bool get_isControlLayout();

  /// @brief Method get_isDeviceLayout, addr 0x45a2c9c, size 0x94, virtual false, abstract: false, final false
  inline bool get_isDeviceLayout();

  /// @brief Method get_isGenericTypeOfDevice, addr 0x45a2d74, size 0xc, virtual false, abstract: false, final false
  inline bool get_isGenericTypeOfDevice();

  /// @brief Method get_isNoisy, addr 0x45a2dbc, size 0xc, virtual false, abstract: false, final false
  inline bool get_isNoisy();

  /// @brief Method get_isOverride, addr 0x45a2d48, size 0xc, virtual false, abstract: false, final false
  inline bool get_isOverride();

  /// @brief Method get_name, addr 0x45a2a90, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString get_name();

  /// @brief Method get_stateFormat, addr 0x45a2ad0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat();

  /// @brief Method get_stateSizeInBytes, addr 0x45a2ad8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_stateSizeInBytes();

  /// @brief Method get_type, addr 0x45a2abc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_type();

  /// @brief Method get_updateBeforeRender, addr 0x45a2c60, size 0x3c, virtual false, abstract: false, final false
  inline bool get_updateBeforeRender();

  /// @brief Method get_variants, addr 0x45a2ac4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::InternedString get_variants();

  static inline void setStaticF_s_CacheInstance(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache value);

  static inline void setStaticF_s_CacheInstanceRef(int32_t value);

  static inline void setStaticF_s_DefaultVariant(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline void setStaticF_s_Layouts(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection value);

  /// @brief Method set_canRunInBackground, addr 0x45a2e50, size 0x9c, virtual false, abstract: false, final false
  inline void set_canRunInBackground(::System::Nullable_1<bool> value);

  /// @brief Method set_hideInUI, addr 0x45a2d9c, size 0x20, virtual false, abstract: false, final false
  inline void set_hideInUI(bool value);

  /// @brief Method set_isGenericTypeOfDevice, addr 0x45a2d80, size 0x10, virtual false, abstract: false, final false
  inline void set_isGenericTypeOfDevice(bool value);

  /// @brief Method set_isNoisy, addr 0x45a2dc8, size 0x20, virtual false, abstract: false, final false
  inline void set_isNoisy(bool value);

  /// @brief Method set_isOverride, addr 0x45a2d54, size 0x20, virtual false, abstract: false, final false
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
  ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> ___m_Controls;

  /// @brief Field m_DisplayName, offset: 0x98, size: 0x8, def value: None
  ::StringW ___m_DisplayName;

  /// @brief Field m_Description, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___m_Description;

  /// @brief Field m_Flags, offset: 0xa8, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags ___m_Flags;

  /// @brief Field VariantSeparator offset 0xffffffff size 0x8
  static constexpr ::ConstString VariantSeparator{ u";" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6990 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlLayout, 0xb0>, "Size mismatch!");

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

} // namespace UnityEngine::InputSystem::Layouts
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlLayout__ControlItem__Flags, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItem/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Flags");
NEED_NO_BOX(::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Builder/ControlBuilder/<>c");
NEED_NO_BOX(::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection/<GetBaseLayouts>d__24");
NEED_NO_BOX(::GlobalNamespace::__InputControlLayout__ControlItemJson____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlLayout__ControlItemJson____c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItemJson/<>c");
NEED_NO_BOX(::GlobalNamespace::__InputControlLayout__LayoutJson____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlLayout__LayoutJson____c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutJson/<>c");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::InputControlLayout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayout*, "UnityEngine.InputSystem.Layouts", "InputControlLayout");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Builder");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItemJson");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutNotFoundException");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::__InputControlLayout____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Builder/ControlBuilder");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection/LayoutMatcher");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection/PrecompiledLayout");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Cache");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance, "UnityEngine.InputSystem.Layouts", "InputControlLayout/CacheRefInstance");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJsonNameAndDescriptorOnly, "UnityEngine.InputSystem.Layouts",
                       "InputControlLayout/LayoutJsonNameAndDescriptorOnly");
