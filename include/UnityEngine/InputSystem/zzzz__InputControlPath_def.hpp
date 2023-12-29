#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlPath_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlPath)
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::InputSystem {
struct __InputControlPath__ParsedPathComponent;
}
namespace UnityEngine::InputSystem {
class __InputControlPath____c;
}
namespace UnityEngine::InputSystem {
struct __InputControlPath__HumanReadableStringOptions;
}
namespace UnityEngine::InputSystem {
struct __InputControlPath__PathComponentType;
}
namespace UnityEngine::InputSystem {
struct __InputControlPath__PathParser;
}
namespace UnityEngine::InputSystem {
class __InputControlPath___Parse_d__33;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__ControlItem;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
template <typename TControl> struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerable;
}
namespace GlobalNamespace {
class __InputControlPath__ParsedPathComponent____c;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct InlinedArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct __InputControlPath__HumanReadableStringOptions;
}
namespace UnityEngine::InputSystem {
struct __InputControlPath__PathComponentType;
}
namespace GlobalNamespace {
class __InputControlPath__ParsedPathComponent____c;
}
namespace UnityEngine::InputSystem {
class InputControlPath;
}
namespace UnityEngine::InputSystem {
class __InputControlPath___Parse_d__33;
}
namespace UnityEngine::InputSystem {
class __InputControlPath____c;
}
namespace UnityEngine::InputSystem {
struct __InputControlPath__ParsedPathComponent;
}
namespace UnityEngine::InputSystem {
struct __InputControlPath__PathParser;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions);
MARK_VAL_T(::UnityEngine::InputSystem::__InputControlPath__PathComponentType);
MARK_REF_PTR_T(::GlobalNamespace::__InputControlPath__ParsedPathComponent____c);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputControlPath);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputControlPath___Parse_d__33);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputControlPath____c);
MARK_VAL_T(::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent);
MARK_VAL_T(::UnityEngine::InputSystem::__InputControlPath__PathParser);
// Type: ::HumanReadableStringOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6313))
// CS Name: ::InputControlPath::HumanReadableStringOptions
struct CORDL_TYPE __InputControlPath__HumanReadableStringOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputControlPath__HumanReadableStringOptions_Unwrapped
  enum struct ____InputControlPath__HumanReadableStringOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_OmitDevice = static_cast<int32_t>(0x2),
    __E_UseShortNames = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputControlPath__HumanReadableStringOptions_Unwrapped() const noexcept {
    return static_cast<____InputControlPath__HumanReadableStringOptions_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputControlPath__HumanReadableStringOptions(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlPath__HumanReadableStringOptions();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions const None;

  /// @brief Field OmitDevice value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions const OmitDevice;

  /// @brief Field UseShortNames value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions const UseShortNames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::PathComponentType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6314))
// CS Name: ::InputControlPath::PathComponentType
struct CORDL_TYPE __InputControlPath__PathComponentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputControlPath__PathComponentType_Unwrapped
  enum struct ____InputControlPath__PathComponentType_Unwrapped : int32_t {
    __E_Name = static_cast<int32_t>(0x0),
    __E_DisplayName = static_cast<int32_t>(0x1),
    __E_Usage = static_cast<int32_t>(0x2),
    __E_Layout = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputControlPath__PathComponentType_Unwrapped() const noexcept {
    return static_cast<____InputControlPath__PathComponentType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputControlPath__PathComponentType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlPath__PathComponentType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Name value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::__InputControlPath__PathComponentType const Name;

  /// @brief Field DisplayName value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::__InputControlPath__PathComponentType const DisplayName;

  /// @brief Field Usage value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::__InputControlPath__PathComponentType const Usage;

  /// @brief Field Layout value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::__InputControlPath__PathComponentType const Layout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlPath__PathComponentType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath__PathComponentType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6315))
// CS Name: ::InputControlPath::ParsedPathComponent::<>c*
class CORDL_TYPE __InputControlPath__ParsedPathComponent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__InputControlPath__ParsedPathComponent____c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0))::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring, ::StringW>* __9__7_0;

  static inline void setStaticF___9(::GlobalNamespace::__InputControlPath__ParsedPathComponent____c* value);

  static inline ::GlobalNamespace::__InputControlPath__ParsedPathComponent____c* getStaticF___9();

  static inline void setStaticF___9__7_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring, ::StringW>* value);

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring, ::StringW>* getStaticF___9__7_0();

  static inline ::GlobalNamespace::__InputControlPath__ParsedPathComponent____c* New_ctor();

  /// @brief Method .ctor addr 0x28ea440 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <get_usages>b__7_0 addr 0x28ea448 size 0x24 virtual false final false
  inline ::StringW _get_usages_b__7_0(::UnityEngine::InputSystem::Utilities::Substring x);

  // Ctor Parameters [CppParam { name: "", ty: "__InputControlPath__ParsedPathComponent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputControlPath__ParsedPathComponent____c(__InputControlPath__ParsedPathComponent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputControlPath__ParsedPathComponent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputControlPath__ParsedPathComponent____c(__InputControlPath__ParsedPathComponent____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlPath__ParsedPathComponent____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputControlPath__ParsedPathComponent____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ParsedPathComponent
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6795)), TypeDefinitionIndex(TypeDefinitionIndex(6755)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6755), inst: 2650
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6316)) CS Name: ::InputControlPath::ParsedPathComponent
struct CORDL_TYPE __InputControlPath__ParsedPathComponent {
public:
  // Declarations
  using __c = ::GlobalNamespace::__InputControlPath__ParsedPathComponent____c;

  __declspec(property(get = get_layout))::StringW layout;

  __declspec(property(get = get_usages))::System::Collections::Generic::IEnumerable_1<::StringW>* usages;

  __declspec(property(get = get_name))::StringW name;

  __declspec(property(get = get_displayName))::StringW displayName;

  __declspec(property(get = get_isWildcard)) bool isWildcard;

  __declspec(property(get = get_isDoubleWildcard)) bool isDoubleWildcard;

  /// @brief Method get_layout addr 0x28ea05c size 0x8 virtual false final false
  inline ::StringW get_layout();

  /// @brief Method get_usages addr 0x28ea064 size 0x138 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_usages();

  /// @brief Method get_name addr 0x28ea19c size 0xc virtual false final false
  inline ::StringW get_name();

  /// @brief Method get_displayName addr 0x28ea1a8 size 0xc virtual false final false
  inline ::StringW get_displayName();

  /// @brief Method get_isWildcard addr 0x28e8d44 size 0x64 virtual false final false
  inline bool get_isWildcard();

  /// @brief Method get_isDoubleWildcard addr 0x28ea1b4 size 0x64 virtual false final false
  inline bool get_isDoubleWildcard();

  /// @brief Method ToHumanReadableString addr 0x28e830c size 0x744 virtual false final false
  inline ::StringW ToHumanReadableString(::StringW parentLayoutName, ::StringW parentControlPath, ByRef<::StringW> referencedLayoutName, ByRef<::StringW> controlPath,
                                         ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions options);

  /// @brief Method ToHumanReadableString addr 0x28ea218 size 0x64 virtual false final false
  static inline ::StringW ToHumanReadableString(::UnityEngine::InputSystem::Utilities::Substring substring);

  /// @brief Method Matches addr 0x28e99f4 size 0x2b0 virtual false final false
  inline bool Matches(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ComparePathElementToString addr 0x28ea27c size 0x160 virtual false final false
  static inline bool ComparePathElementToString(::UnityEngine::InputSystem::Utilities::Substring pathElement, ::StringW element);

  // Ctor Parameters [CppParam { name: "m_Layout", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: None }, CppParam { name: "m_Usages", ty:
  // "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty:
  // "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: None }, CppParam { name: "m_DisplayName", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "",
  // def_value: None }]
  constexpr __InputControlPath__ParsedPathComponent(::UnityEngine::InputSystem::Utilities::Substring m_Layout,
                                                    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> m_Usages,
                                                    ::UnityEngine::InputSystem::Utilities::Substring m_Name, ::UnityEngine::InputSystem::Utilities::Substring m_DisplayName) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlPath__ParsedPathComponent();

  /// @brief Field m_Layout, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::Substring m_Layout;

  /// @brief Field m_Usages, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> m_Usages;

  /// @brief Field m_Name, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::Substring m_Name;

  /// @brief Field m_DisplayName, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::Substring m_DisplayName;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent, m_Layout) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent, m_Usages) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent, m_Name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent, m_DisplayName) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::PathParser
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6316))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6317))
// CS Name: ::InputControlPath::PathParser
struct CORDL_TYPE __InputControlPath__PathParser {
public:
  // Declarations
  __declspec(property(get = get_isAtEnd)) bool isAtEnd;

  /// @brief Method get_isAtEnd addr 0x28e9490 size 0x14 virtual false final false
  inline bool get_isAtEnd();

  /// @brief Method .ctor addr 0x28e8058 size 0x3c virtual false final false
  inline void _ctor(::StringW path);

  /// @brief Method MoveToNextComponent addr 0x28e8094 size 0x278 virtual false final false
  inline bool MoveToNextComponent();

  /// @brief Method ParseComponentPart addr 0x28ea46c size 0x104 virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::Substring ParseComponentPart(char16_t terminator);

  // Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "leftIndexInPath", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rightIndexInPath", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "current", ty:
  // "::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent", modifiers: "", def_value: None }]
  constexpr __InputControlPath__PathParser(::StringW path, int32_t length, int32_t leftIndexInPath, int32_t rightIndexInPath,
                                           ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent current) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlPath__PathParser();

  /// @brief Field path, offset: 0x0, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field length, offset: 0x8, size: 0x4, def value: None
  int32_t length;

  /// @brief Field leftIndexInPath, offset: 0xc, size: 0x4, def value: None
  int32_t leftIndexInPath;

  /// @brief Field rightIndexInPath, offset: 0x10, size: 0x4, def value: None
  int32_t rightIndexInPath;

  /// @brief Field current, offset: 0x18, size: 0x50, def value: None
  ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent current;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlPath__PathParser, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath__PathParser, path) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath__PathParser, length) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath__PathParser, leftIndexInPath) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath__PathParser, rightIndexInPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath__PathParser, current) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6318))
// CS Name: ::InputControlPath::<>c*
class CORDL_TYPE __InputControlPath____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::InputSystem::__InputControlPath____c* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0))::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring, ::StringW>* __9__9_0;

  static inline void setStaticF___9(::UnityEngine::InputSystem::__InputControlPath____c* value);

  static inline ::UnityEngine::InputSystem::__InputControlPath____c* getStaticF___9();

  static inline void setStaticF___9__9_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring, ::StringW>* value);

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring, ::StringW>* getStaticF___9__9_0();

  static inline ::UnityEngine::InputSystem::__InputControlPath____c* New_ctor();

  /// @brief Method .ctor addr 0x28ea5d4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <TryGetDeviceUsages>b__9_0 addr 0x28ea5dc size 0x24 virtual false final false
  inline ::StringW _TryGetDeviceUsages_b__9_0(::UnityEngine::InputSystem::Utilities::Substring x);

  // Ctor Parameters [CppParam { name: "", ty: "__InputControlPath____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputControlPath____c(__InputControlPath____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputControlPath____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputControlPath____c(__InputControlPath____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlPath____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlPath____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::<Parse>d__33
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 232, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(6317)), TypeDefinitionIndex(TypeDefinitionIndex(6316))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6319))
// CS Name: ::InputControlPath::<Parse>d__33*
class CORDL_TYPE __InputControlPath___Parse_d__33 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x50
  __declspec(property(get = __get___2__current, put = __set___2__current))::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x68, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field path, offset 0x70, size 0x8
  __declspec(property(get = __get_path, put = __set_path))::StringW path;

  /// @brief Field <>3__path, offset 0x78, size 0x8
  __declspec(property(get = __get___3__path, put = __set___3__path))::StringW __3__path;

  /// @brief Field <parser>5__2, offset 0x80, size 0x68
  __declspec(property(get = __get__parser_5__2, put = __set__parser_5__2))::UnityEngine::InputSystem::__InputControlPath__PathParser _parser_5__2;

  __declspec(property(
      get = System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current))::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent
      System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent& __get___2__current();

  constexpr ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent const& __get___2__current() const;

  constexpr void __set___2__current(::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::StringW& __get_path();

  constexpr ::StringW const& __get_path() const;

  constexpr void __set_path(::StringW value);

  constexpr ::StringW& __get___3__path();

  constexpr ::StringW const& __get___3__path() const;

  constexpr void __set___3__path(::StringW value);

  constexpr ::UnityEngine::InputSystem::__InputControlPath__PathParser& __get__parser_5__2();

  constexpr ::UnityEngine::InputSystem::__InputControlPath__PathParser const& __get__parser_5__2() const;

  constexpr void __set__parser_5__2(::UnityEngine::InputSystem::__InputControlPath__PathParser value);

  static inline ::UnityEngine::InputSystem::__InputControlPath___Parse_d__33* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x28ea028 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x28ea600 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x28ea604 size 0x140 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.get_Current addr 0x28ea744 size 0x10 virtual true final true
  inline ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x28ea754 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x28ea794 size 0x64 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.GetEnumerator addr 0x28ea7f8 size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>*
  System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x28ea89c size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__InputControlPath___Parse_d__33", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputControlPath___Parse_d__33(__InputControlPath___Parse_d__33&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputControlPath___Parse_d__33", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputControlPath___Parse_d__33(__InputControlPath___Parse_d__33 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControlPath___Parse_d__33();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x50, def value: None
  ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x68, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field path, offset: 0x70, size: 0x8, def value: None
  ::StringW ___path;

  /// @brief Field <>3__path, offset: 0x78, size: 0x8, def value: None
  ::StringW _____3__path;

  /// @brief Field <parser>5__2, offset: 0x80, size: 0x68, def value: None
  ::UnityEngine::InputSystem::__InputControlPath__PathParser ____parser_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlPath___Parse_d__33, 0xe8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath___Parse_d__33, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath___Parse_d__33, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath___Parse_d__33, _____l__initialThreadId) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath___Parse_d__33, ___path) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath___Parse_d__33, _____3__path) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlPath___Parse_d__33, ____parser_5__2) == 0x80, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControlPath
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6320))
// CS Name: ::UnityEngine.InputSystem::InputControlPath*
class CORDL_TYPE InputControlPath : public ::System::Object {
public:
  // Declarations
  using _Parse_d__33 = ::UnityEngine::InputSystem::__InputControlPath___Parse_d__33;

  using __c = ::UnityEngine::InputSystem::__InputControlPath____c;

  using PathParser = ::UnityEngine::InputSystem::__InputControlPath__PathParser;

  using ParsedPathComponent = ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent;

  using PathComponentType = ::UnityEngine::InputSystem::__InputControlPath__PathComponentType;

  using HumanReadableStringOptions = ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions;

  /// @brief Method CleanSlashes addr 0x28e7ae0 size 0x1c virtual false final false
  static inline ::StringW CleanSlashes(::StringW pathComponent);

  /// @brief Method Combine addr 0x28e3770 size 0xf4 virtual false final false
  static inline ::StringW Combine(::UnityEngine::InputSystem::InputControl* parent, ::StringW path);

  /// @brief Method ToHumanReadableString addr 0x28e7afc size 0x2c virtual false final false
  static inline ::StringW ToHumanReadableString(::StringW path, ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions options, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToHumanReadableString addr 0x28e7b28 size 0x434 virtual false final false
  static inline ::StringW ToHumanReadableString(::StringW path, ByRef<::StringW> deviceLayoutName, ByRef<::StringW> controlPath,
                                                ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions options, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method TryGetDeviceUsages addr 0x28e8a50 size 0x1a8 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> TryGetDeviceUsages(::StringW path);

  /// @brief Method TryGetDeviceLayout addr 0x28e8bf8 size 0x14c virtual false final false
  static inline ::StringW TryGetDeviceLayout(::StringW path);

  /// @brief Method TryGetControlLayout addr 0x28e8da8 size 0x23c virtual false final false
  static inline ::StringW TryGetControlLayout(::StringW path);

  /// @brief Method FindControlLayoutRecursive addr 0x28e8fe4 size 0x170 virtual false final false
  static inline ::StringW FindControlLayoutRecursive(ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser> parser, ::StringW layoutName);

  /// @brief Method FindControlLayoutRecursive addr 0x28e9154 size 0x198 virtual false final false
  static inline ::StringW FindControlLayoutRecursive(ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser> parser, ::UnityEngine::InputSystem::Layouts::InputControlLayout* layout);

  /// @brief Method ControlLayoutMatchesPathComponent addr 0x28e92ec size 0x1a4 virtual false final false
  static inline bool ControlLayoutMatchesPathComponent(ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> controlItem,
                                                       ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser> parser);

  /// @brief Method StringMatches addr 0x28e94a4 size 0x204 virtual false final false
  static inline bool StringMatches(::UnityEngine::InputSystem::Utilities::Substring str, ::UnityEngine::InputSystem::Utilities::InternedString matchTo);

  /// @brief Method TryFindControl addr 0x28e105c size 0x60 virtual false final false
  static inline ::UnityEngine::InputSystem::InputControl* TryFindControl(::UnityEngine::InputSystem::InputControl* control, ::StringW path, int32_t indexInPath);

  /// @brief Method TryFindControls addr 0x28e96a8 size 0x15c virtual false final false
  static inline ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> TryFindControls(::UnityEngine::InputSystem::InputControl* control,
                                                                                                                                         ::StringW path, int32_t indexInPath);

  /// @brief Method TryFindControls addr 0x28e9804 size 0x70 virtual false final false
  static inline int32_t TryFindControls(::UnityEngine::InputSystem::InputControl* control, ::StringW path,
                                        ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>> matches, int32_t indexInPath);

  /// @brief Method TryFindControl addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TControl> static inline TControl TryFindControl(::UnityEngine::InputSystem::InputControl* control, ::StringW path, int32_t indexInPath);

  /// @brief Method TryFindControls addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TControl>
  static inline int32_t TryFindControls(::UnityEngine::InputSystem::InputControl* control, ::StringW path, int32_t indexInPath,
                                        ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> matches);

  /// @brief Method TryFindChild addr 0x28e3b84 size 0x60 virtual false final false
  static inline ::UnityEngine::InputSystem::InputControl* TryFindChild(::UnityEngine::InputSystem::InputControl* control, ::StringW path, int32_t indexInPath);

  /// @brief Method TryFindChild addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TControl> static inline TControl TryFindChild(::UnityEngine::InputSystem::InputControl* control, ::StringW path, int32_t indexInPath);

  /// @brief Method Matches addr 0x28e7f5c size 0xfc virtual false final false
  static inline bool Matches(::StringW expected, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method MatchesPrefix addr 0x28e98dc size 0x118 virtual false final false
  static inline bool MatchesPrefix(::StringW expected, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method MatchesRecursive addr 0x28e9874 size 0x68 virtual false final false
  static inline bool MatchesRecursive(ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser> parser, ::UnityEngine::InputSystem::InputControl* currentControl, bool prefixOnly);

  /// @brief Method MatchControlsRecursive addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TControl>
  static inline TControl MatchControlsRecursive(::UnityEngine::InputSystem::InputControl* control, ::StringW path, int32_t indexInPath,
                                                ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> matches, bool matchMultiple);

  /// @brief Method MatchByUsageAtDeviceRootRecursive addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TControl>
  static inline TControl MatchByUsageAtDeviceRootRecursive(::UnityEngine::InputSystem::InputDevice* device, ::StringW path, int32_t indexInPath,
                                                           ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> matches, bool matchMultiple);

  /// @brief Method MatchChildrenRecursive addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TControl>
  static inline TControl MatchChildrenRecursive(::UnityEngine::InputSystem::InputControl* control, ::StringW path, int32_t indexInPath,
                                                ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> matches, bool matchMultiple);

  /// @brief Method MatchPathComponent addr 0x28e9ca4 size 0x250 virtual false final false
  static inline bool MatchPathComponent(::StringW component, ::StringW path, ByRef<int32_t> indexInPath, ::UnityEngine::InputSystem::__InputControlPath__PathComponentType componentType,
                                        int32_t startIndexInComponent);

  /// @brief Method PathComponentCanYieldMultipleMatches addr 0x28e9ef4 size 0xbc virtual false final false
  static inline bool PathComponentCanYieldMultipleMatches(::StringW path, int32_t indexInPath);

  /// @brief Method Parse addr 0x28e9fb0 size 0x78 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>* Parse(::StringW path);

  // Ctor Parameters [CppParam { name: "", ty: "InputControlPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputControlPath(InputControlPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputControlPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputControlPath(InputControlPath const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlPath();

public:
  /// @brief Field Wildcard offset 0xffffffff size 0x8
  static constexpr ::ConstString Wildcard{ u"*" };

  /// @brief Field DoubleWildcard offset 0xffffffff size 0x8
  static constexpr ::ConstString DoubleWildcard{ u"**" };

  /// @brief Field Separator offset 0xffffffff size 0x2
  static constexpr char16_t Separator{ u'/' };

  /// @brief Field SeparatorReplacement offset 0xffffffff size 0x2
  static constexpr char16_t SeparatorReplacement{ u' ' };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControlPath, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions, "UnityEngine.InputSystem", "InputControlPath/HumanReadableStringOptions");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlPath__PathComponentType, "UnityEngine.InputSystem", "InputControlPath/PathComponentType");
NEED_NO_BOX(::GlobalNamespace::__InputControlPath__ParsedPathComponent____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputControlPath__ParsedPathComponent____c*, "UnityEngine.InputSystem", "InputControlPath/ParsedPathComponent/<>c");
NEED_NO_BOX(::UnityEngine::InputSystem::InputControlPath);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlPath*, "UnityEngine.InputSystem", "InputControlPath");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputControlPath___Parse_d__33);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlPath___Parse_d__33*, "UnityEngine.InputSystem", "InputControlPath/<Parse>d__33");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputControlPath____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlPath____c*, "UnityEngine.InputSystem", "InputControlPath/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent, "UnityEngine.InputSystem", "InputControlPath/ParsedPathComponent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlPath__PathParser, "UnityEngine.InputSystem", "InputControlPath/PathParser");
