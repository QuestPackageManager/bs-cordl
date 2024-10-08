#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputDeviceMatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceMatcher)
namespace GlobalNamespace {
struct __InputDeviceMatcher__MatcherJson__Capability;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputDeviceMatcher__MatcherJson;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputDeviceMatcher____c;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputDeviceMatcher___get_patterns_d__4;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
class __InputDeviceMatcher____c;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputDeviceMatcher___get_patterns_d__4;
}
namespace GlobalNamespace {
struct __InputDeviceMatcher__MatcherJson__Capability;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputDeviceMatcher__MatcherJson;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4);
MARK_VAL_T(::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson);
// Type: ::Capability
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputDeviceMatcher::MatcherJson::Capability
struct CORDL_TYPE __InputDeviceMatcher__MatcherJson__Capability {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputDeviceMatcher__MatcherJson__Capability();

  // Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __InputDeviceMatcher__MatcherJson__Capability(::StringW path, ::StringW value) noexcept;

  /// @brief Field path, offset: 0x0, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field value, offset: 0x8, size: 0x8, def value: None
  ::StringW value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6996 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability, path) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability, value) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MatcherJson
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: ::InputDeviceMatcher::MatcherJson
struct CORDL_TYPE __InputDeviceMatcher__MatcherJson {
public:
  // Declarations
  using Capability = ::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability;

  /// @brief Method FromMatcher, addr 0x44e9484, size 0x318, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson FromMatcher(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher);

  /// @brief Method ToMatcher, addr 0x44e97f0, size 0x458, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher ToMatcher();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputDeviceMatcher__MatcherJson();

  // Ctor Parameters [CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interfaces", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "",
  // def_value: None }, CppParam { name: "deviceClass", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "deviceClasses", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers:
  // "", def_value: None }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "manufacturers", ty: "::ArrayW<::StringW,::Array<::StringW>*>",
  // modifiers: "", def_value: None }, CppParam { name: "product", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "products", ty: "::ArrayW<::StringW,::Array<::StringW>*>",
  // modifiers: "", def_value: None }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "versions", ty: "::ArrayW<::StringW,::Array<::StringW>*>",
  // modifiers: "", def_value: None }, CppParam { name: "capabilities", ty:
  // "::ArrayW<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability,::Array<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability>*>", modifiers: "", def_value: None }]
  constexpr __InputDeviceMatcher__MatcherJson(
      ::StringW interface, ::ArrayW<::StringW, ::Array<::StringW>*> interfaces, ::StringW deviceClass, ::ArrayW<::StringW, ::Array<::StringW>*> deviceClasses, ::StringW manufacturer,
      ::ArrayW<::StringW, ::Array<::StringW>*> manufacturers, ::StringW product, ::ArrayW<::StringW, ::Array<::StringW>*> products, ::StringW version,
      ::ArrayW<::StringW, ::Array<::StringW>*> versions,
      ::ArrayW<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability, ::Array<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability>*> capabilities) noexcept;

  /// @brief Field interface, offset: 0x0, size: 0x8, def value: None
  ::StringW interface;

  /// @brief Field interfaces, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> interfaces;

  /// @brief Field deviceClass, offset: 0x10, size: 0x8, def value: None
  ::StringW deviceClass;

  /// @brief Field deviceClasses, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> deviceClasses;

  /// @brief Field manufacturer, offset: 0x20, size: 0x8, def value: None
  ::StringW manufacturer;

  /// @brief Field manufacturers, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> manufacturers;

  /// @brief Field product, offset: 0x30, size: 0x8, def value: None
  ::StringW product;

  /// @brief Field products, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> products;

  /// @brief Field version, offset: 0x40, size: 0x8, def value: None
  ::StringW version;

  /// @brief Field versions, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> versions;

  /// @brief Field capabilities, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability, ::Array<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability>*> capabilities;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6997 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson, interface) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson, interfaces) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson, deviceClass) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson, deviceClasses) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson, manufacturer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson, manufacturers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson, product) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson, products) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson, version) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson, versions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson, capabilities) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: ::InputDeviceMatcher::<>c*
class CORDL_TYPE __InputDeviceMatcher____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::System::Func_2<char16_t, bool>* __9__11_0;

  static inline ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c* New_ctor();

  /// @brief Method <With>b__11_0, addr 0x44e9cac, size 0x88, virtual false, abstract: false, final false
  inline bool _With_b__11_0(char16_t ch);

  /// @brief Method .ctor, addr 0x44e9ca4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c* getStaticF___9();

  static inline ::System::Func_2<char16_t, bool>* getStaticF___9__11_0();

  static inline void setStaticF___9(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c* value);

  static inline void setStaticF___9__11_0(::System::Func_2<char16_t, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputDeviceMatcher____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputDeviceMatcher____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputDeviceMatcher____c(__InputDeviceMatcher____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputDeviceMatcher____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputDeviceMatcher____c(__InputDeviceMatcher____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6998 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Type: UnityEngine.InputSystem.Layouts::InputDeviceMatcher
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.Layouts::InputDeviceMatcher
struct CORDL_TYPE InputDeviceMatcher {
public:
  // Declarations
  using MatcherJson = ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson;

  using __c = ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c;

  using _get_patterns_d__4 = ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4;

  __declspec(property(get = get_empty)) bool empty;

  /// @brief Field kDeviceClassKey, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kDeviceClassKey, put = setStaticF_kDeviceClassKey)) ::UnityEngine::InputSystem::Utilities::InternedString kDeviceClassKey;

  /// @brief Field kInterfaceKey, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kInterfaceKey, put = setStaticF_kInterfaceKey)) ::UnityEngine::InputSystem::Utilities::InternedString kInterfaceKey;

  /// @brief Field kManufacturerKey, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kManufacturerKey, put = setStaticF_kManufacturerKey)) ::UnityEngine::InputSystem::Utilities::InternedString kManufacturerKey;

  /// @brief Field kProductKey, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kProductKey, put = setStaticF_kProductKey)) ::UnityEngine::InputSystem::Utilities::InternedString kProductKey;

  /// @brief Field kVersionKey, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kVersionKey, put = setStaticF_kVersionKey)) ::UnityEngine::InputSystem::Utilities::InternedString kVersionKey;

  __declspec(property(get = get_patterns)) ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>* patterns;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>*();

  /// @brief Method Equals, addr 0x44e9100, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x44e8fc4, size 0x130, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher other);

  /// @brief Method FromDeviceDescription, addr 0x44e8c94, size 0x17c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher FromDeviceDescription(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription);

  /// @brief Method GetHashCode, addr 0x44e926c, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetNumPropertiesIn, addr 0x44e8bd0, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t GetNumPropertiesIn(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description);

  /// @brief Method MatchPercentage, addr 0x44e8118, size 0x348, virtual false, abstract: false, final false
  inline float_t MatchPercentage(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription);

  /// @brief Method MatchSingleProperty, addr 0x44e846c, size 0xd8, virtual false, abstract: false, final false
  static inline bool MatchSingleProperty(::System::Object* pattern, ::StringW value);

  /// @brief Method ToString, addr 0x44e8e10, size 0x1b4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method With, addr 0x44e7d2c, size 0x20c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher With(::UnityEngine::InputSystem::Utilities::InternedString key, ::System::Object* value, bool supportRegex);

  /// @brief Method WithCapability, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithCapability(::StringW path, TValue value);

  /// @brief Method WithDeviceClass, addr 0x44e7f38, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithDeviceClass(::StringW pattern, bool supportRegex);

  /// @brief Method WithInterface, addr 0x44e7cb4, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithInterface(::StringW pattern, bool supportRegex);

  /// @brief Method WithManufacturer, addr 0x44e7fb0, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithManufacturer(::StringW pattern, bool supportRegex);

  /// @brief Method WithProduct, addr 0x44e8028, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithProduct(::StringW pattern, bool supportRegex);

  /// @brief Method WithVersion, addr 0x44e80a0, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithVersion(::StringW pattern, bool supportRegex);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_kDeviceClassKey();

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_kInterfaceKey();

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_kManufacturerKey();

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_kProductKey();

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_kVersionKey();

  /// @brief Method get_empty, addr 0x44e7bfc, size 0x10, virtual false, abstract: false, final false
  inline bool get_empty();

  /// @brief Method get_patterns, addr 0x44e7c0c, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>* get_patterns();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>* i___System__IEquatable_1___UnityEngine__InputSystem__Layouts__InputDeviceMatcher_();

  /// @brief Method op_Equality, addr 0x44e9190, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher left, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher right);

  /// @brief Method op_Inequality, addr 0x44e91fc, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher left, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher right);

  static inline void setStaticF_kDeviceClassKey(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline void setStaticF_kInterfaceKey(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline void setStaticF_kManufacturerKey(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline void setStaticF_kProductKey(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline void setStaticF_kVersionKey(::UnityEngine::InputSystem::Utilities::InternedString value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDeviceMatcher();

  // Ctor Parameters [CppParam { name: "m_Patterns", ty:
  // "::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>,::Array<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>>*>",
  // modifiers: "", def_value: None }]
  constexpr InputDeviceMatcher(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Object*>,
                                        ::Array<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Object*>>*>
                                   m_Patterns) noexcept;

  /// @brief Field m_Patterns, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Object*>,
           ::Array<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Object*>>*>
      m_Patterns;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7000 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, m_Patterns) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Type: ::<get_patterns>d__4
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: ::InputDeviceMatcher::<get_patterns>d__4*
class CORDL_TYPE __InputDeviceMatcher___get_patterns_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(
      get = System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current)) ::System::Collections::Generic::KeyValuePair_2<::StringW,
                                                                                                                                                                                      ::System::Object*>
      System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> __2__current;

  /// @brief Field <>3__<>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___3____4__this, put = __cordl_internal_set___3____4__this)) ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher __3____4__this;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <count>5__2, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__count_5__2, put = __cordl_internal_set__count_5__2)) int32_t _count_5__2;

  /// @brief Field <i>5__3, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__3, put = __cordl_internal_set__i_5__3)) int32_t _i_5__3;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x44e9d38, size 0x15c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator, addr 0x44e9f34, size 0x9c, virtual true, abstract:
  /// false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*
  System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_Object___GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current, addr 0x44e9e94, size 0xc, virtual true, abstract: false,
  /// final true
  inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>
  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x44e9fd0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x44e9ea0, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x44e9ed8, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x44e9d34, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>& __cordl_internal_get___2__current();

  constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher const& __cordl_internal_get___3____4__this() const;

  constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher& __cordl_internal_get___3____4__this();

  constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get__count_5__2() const;

  constexpr int32_t& __cordl_internal_get__count_5__2();

  constexpr int32_t const& __cordl_internal_get__i_5__3() const;

  constexpr int32_t& __cordl_internal_get__i_5__3();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> value);

  constexpr void __cordl_internal_set___3____4__this(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__count_5__2(int32_t value);

  constexpr void __cordl_internal_set__i_5__3(int32_t value);

  /// @brief Method .ctor, addr 0x44e7c80, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___System__Object___() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*
  i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___System__Object___() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputDeviceMatcher___get_patterns_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputDeviceMatcher___get_patterns_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputDeviceMatcher___get_patterns_d__4(__InputDeviceMatcher___get_patterns_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputDeviceMatcher___get_patterns_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputDeviceMatcher___get_patterns_d__4(__InputDeviceMatcher___get_patterns_d__4 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher _____4__this;

  /// @brief Field <>3__<>4__this, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher _____3____4__this;

  /// @brief Field <count>5__2, offset: 0x40, size: 0x4, def value: None
  int32_t ____count_5__2;

  /// @brief Field <i>5__3, offset: 0x44, size: 0x4, def value: None
  int32_t ____i_5__3;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6999 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4, _____3____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4, ____count_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4, ____i_5__3) == 0x44, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c*, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher/<>c");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher/<get_patterns>d__4");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher/MatcherJson/Capability");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher/MatcherJson");
