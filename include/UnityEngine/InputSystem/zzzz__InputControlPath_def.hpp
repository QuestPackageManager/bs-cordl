#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlPath.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlPath)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_ControlItem;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
namespace UnityEngine::InputSystem {
template <typename TControl> struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
struct InputControlPath_HumanReadableStringOptions;
}
namespace UnityEngine::InputSystem {
struct InputControlPath_ParsedPathComponent;
}
namespace UnityEngine::InputSystem {
struct InputControlPath_PathComponentType;
}
namespace UnityEngine::InputSystem {
struct InputControlPath_PathParser;
}
namespace UnityEngine::InputSystem {
class InputControlPath__Parse_d__34;
}
namespace UnityEngine::InputSystem {
class InputControlPath___c;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class ParsedPathComponent_InputControlPath___c;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputControlPath_HumanReadableStringOptions;
}
namespace UnityEngine::InputSystem {
struct InputControlPath_PathComponentType;
}
namespace UnityEngine::InputSystem {
class InputControlPath;
}
namespace UnityEngine::InputSystem {
class InputControlPath__Parse_d__34;
}
namespace UnityEngine::InputSystem {
class InputControlPath___c;
}
namespace UnityEngine::InputSystem {
class ParsedPathComponent_InputControlPath___c;
}
namespace UnityEngine::InputSystem {
struct InputControlPath_ParsedPathComponent;
}
namespace UnityEngine::InputSystem {
struct InputControlPath_PathParser;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions);
MARK_VAL_T(::UnityEngine::InputSystem::InputControlPath_PathComponentType);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputControlPath);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputControlPath__Parse_d__34);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputControlPath___c);
MARK_REF_PTR_T(::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c);
MARK_VAL_T(::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent);
MARK_VAL_T(::UnityEngine::InputSystem::InputControlPath_PathParser);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlPath/HumanReadableStringOptions
struct CORDL_TYPE InputControlPath_HumanReadableStringOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputControlPath_HumanReadableStringOptions_Unwrapped
  enum struct __InputControlPath_HumanReadableStringOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_OmitDevice = static_cast<int32_t>(0x2),
    __E_UseShortNames = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputControlPath_HumanReadableStringOptions_Unwrapped() const noexcept {
    return static_cast<__InputControlPath_HumanReadableStringOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlPath_HumanReadableStringOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputControlPath_HumanReadableStringOptions(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions const None;

  /// @brief Field OmitDevice value: I32(2)
  static ::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions const OmitDevice;

  /// @brief Field UseShortNames value: I32(4)
  static ::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions const UseShortNames;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6631 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlPath/PathComponentType
struct CORDL_TYPE InputControlPath_PathComponentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputControlPath_PathComponentType_Unwrapped
  enum struct __InputControlPath_PathComponentType_Unwrapped : int32_t {
    __E_Name = static_cast<int32_t>(0x0),
    __E_DisplayName = static_cast<int32_t>(0x1),
    __E_Usage = static_cast<int32_t>(0x2),
    __E_Layout = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputControlPath_PathComponentType_Unwrapped() const noexcept {
    return static_cast<__InputControlPath_PathComponentType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlPath_PathComponentType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputControlPath_PathComponentType(int32_t value__) noexcept;

  /// @brief Field DisplayName value: I32(1)
  static ::UnityEngine::InputSystem::InputControlPath_PathComponentType const DisplayName;

  /// @brief Field Layout value: I32(3)
  static ::UnityEngine::InputSystem::InputControlPath_PathComponentType const Layout;

  /// @brief Field Name value: I32(0)
  static ::UnityEngine::InputSystem::InputControlPath_PathComponentType const Name;

  /// @brief Field Usage value: I32(2)
  static ::UnityEngine::InputSystem::InputControlPath_PathComponentType const Usage;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6632 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath_PathComponentType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControlPath_PathComponentType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputControlPath/ParsedPathComponent/<>c
class CORDL_TYPE ParsedPathComponent_InputControlPath___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring, ::StringW>* __9__7_0;

  static inline ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c* New_ctor();

  /// @brief Method .ctor, addr 0x45846b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_usages>b__7_0, addr 0x45846bc, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _get_usages_b__7_0(::UnityEngine::InputSystem::Utilities::Substring x);

  static inline ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring, ::StringW>* getStaticF___9__7_0();

  static inline void setStaticF___9(::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParsedPathComponent_InputControlPath___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParsedPathComponent_InputControlPath___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParsedPathComponent_InputControlPath___c(ParsedPathComponent_InputControlPath___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParsedPathComponent_InputControlPath___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParsedPathComponent_InputControlPath___c(ParsedPathComponent_InputControlPath___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6633 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>, UnityEngine.InputSystem.Utilities.Substring
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlPath/ParsedPathComponent
struct CORDL_TYPE InputControlPath_ParsedPathComponent {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c;

  __declspec(property(get = get_displayName)) ::StringW displayName;

  __declspec(property(get = get_isDoubleWildcard)) bool isDoubleWildcard;

  __declspec(property(get = get_isWildcard)) bool isWildcard;

  __declspec(property(get = get_layout)) ::StringW layout;

  __declspec(property(get = get_name)) ::StringW name;

  __declspec(property(get = get_usages)) ::System::Collections::Generic::IEnumerable_1<::StringW>* usages;

  /// @brief Method ComparePathElementToString, addr 0x45844f8, size 0x160, virtual false, abstract: false, final false
  static inline bool ComparePathElementToString(::UnityEngine::InputSystem::Utilities::Substring pathElement, ::StringW element);

  /// @brief Method Matches, addr 0x4583c40, size 0x2b0, virtual false, abstract: false, final false
  inline bool Matches(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToHumanReadableString, addr 0x45820e8, size 0x7a4, virtual false, abstract: false, final false
  inline ::StringW ToHumanReadableString(::StringW parentLayoutName, ::StringW parentControlPath, ::ByRef<::StringW> referencedLayoutName, ::ByRef<::StringW> controlPath,
                                         ::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions options);

  /// @brief Method ToHumanReadableString, addr 0x4584494, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW ToHumanReadableString(::UnityEngine::InputSystem::Utilities::Substring substring);

  /// @brief Method get_displayName, addr 0x4584424, size 0xc, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_isDoubleWildcard, addr 0x4584430, size 0x64, virtual false, abstract: false, final false
  inline bool get_isDoubleWildcard();

  /// @brief Method get_isWildcard, addr 0x4582b5c, size 0x64, virtual false, abstract: false, final false
  inline bool get_isWildcard();

  /// @brief Method get_layout, addr 0x45842e0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_layout();

  /// @brief Method get_name, addr 0x4584418, size 0xc, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_usages, addr 0x45842e8, size 0x130, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_usages();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlPath_ParsedPathComponent();

  // Ctor Parameters [CppParam { name: "m_Layout", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: None }, CppParam { name: "m_Usages", ty:
  // "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty:
  // "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: None }, CppParam { name: "m_DisplayName", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "",
  // def_value: None }]
  constexpr InputControlPath_ParsedPathComponent(::UnityEngine::InputSystem::Utilities::Substring m_Layout,
                                                 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> m_Usages,
                                                 ::UnityEngine::InputSystem::Utilities::Substring m_Name, ::UnityEngine::InputSystem::Utilities::Substring m_DisplayName) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6634 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field m_Layout, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::Substring m_Layout;

  /// @brief Field m_Usages, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> m_Usages;

  /// @brief Field m_Name, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::Substring m_Name;

  /// @brief Field m_DisplayName, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::Substring m_DisplayName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent, m_Layout) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent, m_Usages) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent, m_Name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent, m_DisplayName) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent, 0x50>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputControlPath::ParsedPathComponent
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlPath/PathParser
struct CORDL_TYPE InputControlPath_PathParser {
public:
  // Declarations
  __declspec(property(get = get_isAtEnd)) bool isAtEnd;

  /// @brief Method MoveToNextComponent, addr 0x4581e7c, size 0x26c, virtual false, abstract: false, final false
  inline bool MoveToNextComponent();

  /// @brief Method ParseComponentPart, addr 0x45846e0, size 0x108, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::Substring ParseComponentPart(char16_t terminator);

  /// @brief Method .ctor, addr 0x4581e40, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW path);

  /// @brief Method get_isAtEnd, addr 0x4583284, size 0x14, virtual false, abstract: false, final false
  inline bool get_isAtEnd();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlPath_PathParser();

  // Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "leftIndexInPath", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rightIndexInPath", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "current", ty:
  // "::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent", modifiers: "", def_value: None }]
  constexpr InputControlPath_PathParser(::StringW path, int32_t length, int32_t leftIndexInPath, int32_t rightIndexInPath,
                                        ::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent current) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6635 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field path, offset: 0x0, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field length, offset: 0x8, size: 0x4, def value: None
  int32_t length;

  /// @brief Field leftIndexInPath, offset: 0xc, size: 0x4, def value: None
  int32_t leftIndexInPath;

  /// @brief Field rightIndexInPath, offset: 0x10, size: 0x4, def value: None
  int32_t rightIndexInPath;

  /// @brief Field current, offset: 0x18, size: 0x50, def value: None
  ::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath_PathParser, path) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath_PathParser, length) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath_PathParser, leftIndexInPath) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath_PathParser, rightIndexInPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath_PathParser, current) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControlPath_PathParser, 0x68>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputControlPath/<>c
class CORDL_TYPE InputControlPath___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::InputControlPath___c* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring, ::StringW>* __9__9_0;

  static inline ::UnityEngine::InputSystem::InputControlPath___c* New_ctor();

  /// @brief Method <TryGetDeviceUsages>b__9_0, addr 0x458484c, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _TryGetDeviceUsages_b__9_0(::UnityEngine::InputSystem::Utilities::Substring x);

  /// @brief Method .ctor, addr 0x4584844, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::InputControlPath___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring, ::StringW>* getStaticF___9__9_0();

  static inline void setStaticF___9(::UnityEngine::InputSystem::InputControlPath___c* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlPath___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputControlPath___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputControlPath___c(InputControlPath___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputControlPath___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputControlPath___c(InputControlPath___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6636 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControlPath___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object, UnityEngine.InputSystem.InputControlPath::ParsedPathComponent, UnityEngine.InputSystem.InputControlPath::PathParser
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputControlPath/<Parse>d__34
class CORDL_TYPE InputControlPath__Parse_d__34 : public ::System::Object {
public:
  // Declarations
  __declspec(property(
      get = System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current)) ::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent
      System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x50
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent __2__current;

  /// @brief Field <>3__path, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get___3__path, put = __cordl_internal_set___3__path)) ::StringW __3__path;

  /// @brief Field <>l__initialThreadId, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <parser>5__2, offset 0x80, size 0x68
  __declspec(property(get = __cordl_internal_get__parser_5__2, put = __cordl_internal_set__parser_5__2)) ::UnityEngine::InputSystem::InputControlPath_PathParser _parser_5__2;

  /// @brief Field path, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_path, put = __cordl_internal_set_path)) ::StringW path;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4584874, size 0x130, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::InputSystem::InputControlPath__Parse_d__34* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.GetEnumerator, addr 0x4584a50, size 0x9c, virtual true, abstract: false, final
  /// true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent>*
  System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.get_Current, addr 0x45849a4, size 0x10, virtual true, abstract: false, final
  /// true
  inline ::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x4584aec, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x45849b4, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x45849ec, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4584870, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent& __cordl_internal_get___2__current();

  constexpr ::StringW const& __cordl_internal_get___3__path() const;

  constexpr ::StringW& __cordl_internal_get___3__path();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::UnityEngine::InputSystem::InputControlPath_PathParser const& __cordl_internal_get__parser_5__2() const;

  constexpr ::UnityEngine::InputSystem::InputControlPath_PathParser& __cordl_internal_get__parser_5__2();

  constexpr ::StringW const& __cordl_internal_get_path() const;

  constexpr ::StringW& __cordl_internal_get_path();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent value);

  constexpr void __cordl_internal_set___3__path(::StringW value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__parser_5__2(::UnityEngine::InputSystem::InputControlPath_PathParser value);

  constexpr void __cordl_internal_set_path(::StringW value);

  /// @brief Method .ctor, addr 0x45842ac, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputControlPath_ParsedPathComponent_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputControlPath_ParsedPathComponent_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlPath__Parse_d__34();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputControlPath__Parse_d__34", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputControlPath__Parse_d__34(InputControlPath__Parse_d__34&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputControlPath__Parse_d__34", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputControlPath__Parse_d__34(InputControlPath__Parse_d__34 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6637 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x50, def value: None
  ::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x68, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field path, offset: 0x70, size: 0x8, def value: None
  ::StringW ___path;

  /// @brief Field <>3__path, offset: 0x78, size: 0x8, def value: None
  ::StringW _____3__path;

  /// @brief Field <parser>5__2, offset: 0x80, size: 0x68, def value: None
  ::UnityEngine::InputSystem::InputControlPath_PathParser ____parser_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath__Parse_d__34, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath__Parse_d__34, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath__Parse_d__34, _____l__initialThreadId) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath__Parse_d__34, ___path) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath__Parse_d__34, _____3__path) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControlPath__Parse_d__34, ____parser_5__2) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControlPath__Parse_d__34, 0xe8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputControlPath
class CORDL_TYPE InputControlPath : public ::System::Object {
public:
  // Declarations
  using HumanReadableStringOptions = ::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions;

  using ParsedPathComponent = ::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent;

  using PathComponentType = ::UnityEngine::InputSystem::InputControlPath_PathComponentType;

  using PathParser = ::UnityEngine::InputSystem::InputControlPath_PathParser;

  using _Parse_d__34 = ::UnityEngine::InputSystem::InputControlPath__Parse_d__34;

  using __c = ::UnityEngine::InputSystem::InputControlPath___c;

  /// @brief Method CleanSlashes, addr 0x45818bc, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW CleanSlashes(::StringW pathComponent);

  /// @brief Method Combine, addr 0x457cbf4, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW Combine(::UnityEngine::InputSystem::InputControl* parent, ::StringW path);

  /// @brief Method ControlLayoutMatchesPathComponent, addr 0x45830e0, size 0x1a4, virtual false, abstract: false, final false
  static inline bool ControlLayoutMatchesPathComponent(::ByRef<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> controlItem,
                                                       ::ByRef<::UnityEngine::InputSystem::InputControlPath_PathParser> parser);

  /// @brief Method FindControlLayoutRecursive, addr 0x4582f48, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW FindControlLayoutRecursive(::ByRef<::UnityEngine::InputSystem::InputControlPath_PathParser> parser, ::UnityEngine::InputSystem::Layouts::InputControlLayout* layout);

  /// @brief Method FindControlLayoutRecursive, addr 0x4582ddc, size 0x16c, virtual false, abstract: false, final false
  static inline ::StringW FindControlLayoutRecursive(::ByRef<::UnityEngine::InputSystem::InputControlPath_PathParser> parser, ::StringW layoutName);

  /// @brief Method MatchByUsageAtDeviceRootRecursive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TControl>
  static inline TControl MatchByUsageAtDeviceRootRecursive(::UnityEngine::InputSystem::InputDevice* device, ::StringW path, int32_t indexInPath,
                                                           ::ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> matches, bool matchMultiple);

  /// @brief Method MatchChildrenRecursive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TControl>
  static inline TControl MatchChildrenRecursive(::UnityEngine::InputSystem::InputControl* control, ::StringW path, int32_t indexInPath,
                                                ::ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> matches, bool matchMultiple);

  /// @brief Method MatchControlComponent, addr 0x4583734, size 0x410, virtual false, abstract: false, final false
  static inline bool MatchControlComponent(::ByRef<::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent> expectedControlComponent,
                                           ::ByRef<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> controlItem, bool matchAlias);

  /// @brief Method MatchControlsRecursive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TControl>
  static inline TControl MatchControlsRecursive(::UnityEngine::InputSystem::InputControl* control, ::StringW path, int32_t indexInPath,
                                                ::ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> matches, bool matchMultiple);

  /// @brief Method MatchPathComponent, addr 0x4583ef0, size 0x290, virtual false, abstract: false, final false
  static inline bool MatchPathComponent(::StringW component, ::StringW path, ::ByRef<int32_t> indexInPath, ::UnityEngine::InputSystem::InputControlPath_PathComponentType componentType,
                                        int32_t startIndexInComponent);

  /// @brief Method Matches, addr 0x4581d60, size 0xe0, virtual false, abstract: false, final false
  static inline bool Matches(::StringW expected, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method MatchesPrefix, addr 0x4583b44, size 0xfc, virtual false, abstract: false, final false
  static inline bool MatchesPrefix(::StringW expected, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method MatchesRecursive, addr 0x45836cc, size 0x68, virtual false, abstract: false, final false
  static inline bool MatchesRecursive(::ByRef<::UnityEngine::InputSystem::InputControlPath_PathParser> parser, ::UnityEngine::InputSystem::InputControl* currentControl, bool prefixOnly);

  /// @brief Method Parse, addr 0x458423c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent>* Parse(::StringW path);

  /// @brief Method PathComponentCanYieldMultipleMatches, addr 0x4584180, size 0xbc, virtual false, abstract: false, final false
  static inline bool PathComponentCanYieldMultipleMatches(::StringW path, int32_t indexInPath);

  /// @brief Method StringMatches, addr 0x4583298, size 0x268, virtual false, abstract: false, final false
  static inline bool StringMatches(::UnityEngine::InputSystem::Utilities::Substring str, ::UnityEngine::InputSystem::Utilities::InternedString matchTo);

  /// @brief Method ToHumanReadableString, addr 0x4581904, size 0x45c, virtual false, abstract: false, final false
  static inline ::StringW ToHumanReadableString(::StringW path, ::ByRef<::StringW> deviceLayoutName, ::ByRef<::StringW> controlPath,
                                                ::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions options, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToHumanReadableString, addr 0x45818d8, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToHumanReadableString(::StringW path, ::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions options, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method TryFindChild, addr 0x457cff8, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControl* TryFindChild(::UnityEngine::InputSystem::InputControl* control, ::StringW path, int32_t indexInPath);

  /// @brief Method TryFindChild, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TControl> static inline TControl TryFindChild(::UnityEngine::InputSystem::InputControl* control, ::StringW path, int32_t indexInPath);

  /// @brief Method TryFindControl, addr 0x4576134, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControl* TryFindControl(::UnityEngine::InputSystem::InputControl* control, ::StringW path, int32_t indexInPath);

  /// @brief Method TryFindControl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TControl> static inline TControl TryFindControl(::UnityEngine::InputSystem::InputControl* control, ::StringW path, int32_t indexInPath);

  /// @brief Method TryFindControls, addr 0x4583500, size 0x15c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> TryFindControls(::UnityEngine::InputSystem::InputControl* control,
                                                                                                                                         ::StringW path, int32_t indexInPath);

  /// @brief Method TryFindControls, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TControl>
  static inline int32_t TryFindControls(::UnityEngine::InputSystem::InputControl* control, ::StringW path, int32_t indexInPath,
                                        ::ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> matches);

  /// @brief Method TryFindControls, addr 0x458365c, size 0x70, virtual false, abstract: false, final false
  static inline int32_t TryFindControls(::UnityEngine::InputSystem::InputControl* control, ::StringW path,
                                        ::ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>> matches, int32_t indexInPath);

  /// @brief Method TryGetControlLayout, addr 0x4582bc0, size 0x21c, virtual false, abstract: false, final false
  static inline ::StringW TryGetControlLayout(::StringW path);

  /// @brief Method TryGetDeviceLayout, addr 0x4582a24, size 0x138, virtual false, abstract: false, final false
  static inline ::StringW TryGetDeviceLayout(::StringW path);

  /// @brief Method TryGetDeviceUsages, addr 0x458288c, size 0x198, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> TryGetDeviceUsages(::StringW path);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlPath();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputControlPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputControlPath(InputControlPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputControlPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputControlPath(InputControlPath const&) = delete;

  /// @brief Field DoubleWildcard offset 0xffffffff size 0x8
  static constexpr ::ConstString DoubleWildcard{ u"**" };

  /// @brief Field Separator offset 0xffffffff size 0x2
  static constexpr char16_t Separator{ u'/' };

  /// @brief Field SeparatorReplacement offset 0xffffffff size 0x2
  static constexpr char16_t SeparatorReplacement{ u' ' };

  /// @brief Field Wildcard offset 0xffffffff size 0x8
  static constexpr ::ConstString Wildcard{ u"*" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6638 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControlPath, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions, "UnityEngine.InputSystem", "InputControlPath/HumanReadableStringOptions");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlPath_PathComponentType, "UnityEngine.InputSystem", "InputControlPath/PathComponentType");
NEED_NO_BOX(::UnityEngine::InputSystem::InputControlPath);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlPath*, "UnityEngine.InputSystem", "InputControlPath");
NEED_NO_BOX(::UnityEngine::InputSystem::InputControlPath__Parse_d__34);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlPath__Parse_d__34*, "UnityEngine.InputSystem", "InputControlPath/<Parse>d__34");
NEED_NO_BOX(::UnityEngine::InputSystem::InputControlPath___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlPath___c*, "UnityEngine.InputSystem", "InputControlPath/<>c");
NEED_NO_BOX(::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*, "UnityEngine.InputSystem", "InputControlPath/ParsedPathComponent/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent, "UnityEngine.InputSystem", "InputControlPath/ParsedPathComponent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlPath_PathParser, "UnityEngine.InputSystem", "InputControlPath/PathParser");
