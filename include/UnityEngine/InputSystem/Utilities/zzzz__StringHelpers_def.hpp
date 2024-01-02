#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringHelpers)
namespace System {
struct StringComparison;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::InputSystem::Utilities {
class __StringHelpers___Tokenize_d__8;
}
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
namespace UnityEngine::InputSystem::Utilities {
class __StringHelpers___Split_d__9;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class StringHelpers;
}
namespace UnityEngine::InputSystem::Utilities {
class __StringHelpers___Split_d__9;
}
namespace UnityEngine::InputSystem::Utilities {
class __StringHelpers___Tokenize_d__8;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::StringHelpers);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8);
// Type: ::<Tokenize>d__8
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6709)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6706))
// CS Name: ::StringHelpers::<Tokenize>d__8*
class CORDL_TYPE __StringHelpers___Tokenize_d__8 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __get___2__current, put = __set___2__current))::UnityEngine::InputSystem::Utilities::Substring __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x28, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field str, offset 0x30, size 0x8
  __declspec(property(get = __get_str, put = __set_str))::StringW str;

  /// @brief Field <>3__str, offset 0x38, size 0x8
  __declspec(property(get = __get___3__str, put = __set___3__str))::StringW __3__str;

  /// @brief Field <length>5__2, offset 0x40, size 0x4
  __declspec(property(get = __get__length_5__2, put = __set__length_5__2)) int32_t _length_5__2;

  /// @brief Field <endPos>5__3, offset 0x44, size 0x4
  __declspec(property(get = __get__endPos_5__3, put = __set__endPos_5__3)) int32_t _endPos_5__3;

  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_Substring__get_Current))::UnityEngine::InputSystem::Utilities::Substring
      System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_Substring__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::UnityEngine::InputSystem::Utilities::Substring& __get___2__current();

  constexpr ::UnityEngine::InputSystem::Utilities::Substring const& __get___2__current() const;

  constexpr void __set___2__current(::UnityEngine::InputSystem::Utilities::Substring value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::StringW& __get_str();

  constexpr ::StringW const& __get_str() const;

  constexpr void __set_str(::StringW value);

  constexpr ::StringW& __get___3__str();

  constexpr ::StringW const& __get___3__str() const;

  constexpr void __set___3__str(::StringW value);

  constexpr int32_t& __get__length_5__2();

  constexpr int32_t const& __get__length_5__2() const;

  constexpr void __set__length_5__2(int32_t value);

  constexpr int32_t& __get__endPos_5__3();

  constexpr int32_t const& __get__endPos_5__3() const;

  constexpr void __set__endPos_5__3(int32_t value);

  static inline ::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2b1826c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2b18d6c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2b18d70, size 0x290, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.Substring>.get_Current, addr 0x2b19000, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::Substring System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_Substring__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2b1900c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2b1904c, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.Substring>.GetEnumerator, addr 0x2b190a8, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>*
  System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_Substring__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2b1914c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__StringHelpers___Tokenize_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StringHelpers___Tokenize_d__8(__StringHelpers___Tokenize_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StringHelpers___Tokenize_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StringHelpers___Tokenize_d__8(__StringHelpers___Tokenize_d__8 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StringHelpers___Tokenize_d__8();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::Substring _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field str, offset: 0x30, size: 0x8, def value: None
  ::StringW ___str;

  /// @brief Field <>3__str, offset: 0x38, size: 0x8, def value: None
  ::StringW _____3__str;

  /// @brief Field <length>5__2, offset: 0x40, size: 0x4, def value: None
  int32_t ____length_5__2;

  /// @brief Field <endPos>5__3, offset: 0x44, size: 0x4, def value: None
  int32_t ____endPos_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8, ___str) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8, _____3__str) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8, ____length_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8, ____endPos_5__3) == 0x44, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Type: ::<Split>d__9
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6707))
// CS Name: ::StringHelpers::<Split>d__9*
class CORDL_TYPE __StringHelpers___Split_d__9 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::StringW __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field str, offset 0x28, size 0x8
  __declspec(property(get = __get_str, put = __set_str))::StringW str;

  /// @brief Field <>3__str, offset 0x30, size 0x8
  __declspec(property(get = __get___3__str, put = __set___3__str))::StringW __3__str;

  /// @brief Field predicate, offset 0x38, size 0x8
  __declspec(property(get = __get_predicate, put = __set_predicate))::System::Func_2<char16_t, bool>* predicate;

  /// @brief Field <>3__predicate, offset 0x40, size 0x8
  __declspec(property(get = __get___3__predicate, put = __set___3__predicate))::System::Func_2<char16_t, bool>* __3__predicate;

  /// @brief Field <length>5__2, offset 0x48, size 0x4
  __declspec(property(get = __get__length_5__2, put = __set__length_5__2)) int32_t _length_5__2;

  /// @brief Field <position>5__3, offset 0x4c, size 0x4
  __declspec(property(get = __get__position_5__3, put = __set__position_5__3)) int32_t _position_5__3;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_String__get_Current))::StringW System_Collections_Generic_IEnumerator_System_String__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::StringW& __get___2__current();

  constexpr ::StringW const& __get___2__current() const;

  constexpr void __set___2__current(::StringW value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::StringW& __get_str();

  constexpr ::StringW const& __get_str() const;

  constexpr void __set_str(::StringW value);

  constexpr ::StringW& __get___3__str();

  constexpr ::StringW const& __get___3__str() const;

  constexpr void __set___3__str(::StringW value);

  constexpr ::System::Func_2<char16_t, bool>*& __get_predicate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<char16_t, bool>*> const& __get_predicate() const;

  constexpr void __set_predicate(::System::Func_2<char16_t, bool>* value);

  constexpr ::System::Func_2<char16_t, bool>*& __get___3__predicate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<char16_t, bool>*> const& __get___3__predicate() const;

  constexpr void __set___3__predicate(::System::Func_2<char16_t, bool>* value);

  constexpr int32_t& __get__length_5__2();

  constexpr int32_t const& __get__length_5__2() const;

  constexpr void __set__length_5__2(int32_t value);

  constexpr int32_t& __get__position_5__3();

  constexpr int32_t const& __get__position_5__3() const;

  constexpr void __set__position_5__3(int32_t value);

  static inline ::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2b18328, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2b19150, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2b19154, size 0x128, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current, addr 0x2b1927c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2b19284, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2b192c4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator, addr 0x2b192cc, size 0xac, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2b19378, size 0x1004, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__StringHelpers___Split_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StringHelpers___Split_d__9(__StringHelpers___Split_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StringHelpers___Split_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StringHelpers___Split_d__9(__StringHelpers___Split_d__9 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StringHelpers___Split_d__9();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::StringW _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field str, offset: 0x28, size: 0x8, def value: None
  ::StringW ___str;

  /// @brief Field <>3__str, offset: 0x30, size: 0x8, def value: None
  ::StringW _____3__str;

  /// @brief Field predicate, offset: 0x38, size: 0x8, def value: None
  ::System::Func_2<char16_t, bool>* ___predicate;

  /// @brief Field <>3__predicate, offset: 0x40, size: 0x8, def value: None
  ::System::Func_2<char16_t, bool>* _____3__predicate;

  /// @brief Field <length>5__2, offset: 0x48, size: 0x4, def value: None
  int32_t ____length_5__2;

  /// @brief Field <position>5__3, offset: 0x4c, size: 0x4, def value: None
  int32_t ____position_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, ___str) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, _____3__str) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, ___predicate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, _____3__predicate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, ____length_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, ____position_5__3) == 0x4c, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::StringHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6708))
// CS Name: ::UnityEngine.InputSystem.Utilities::StringHelpers*
class CORDL_TYPE StringHelpers : public ::System::Object {
public:
  // Declarations
  using _Split_d__9 = ::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9;

  using _Tokenize_d__8 = ::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8;

  /// @brief Method Escape, addr 0x2b17a90, size 0x16c, virtual false, abstract: false, final false
  /// @param chars: ::StringW (default: u"\n\t\r\\\"")
  /// @param replacements: ::StringW (default: u"ntr\\\"")
  static inline ::StringW Escape(::StringW str, ::StringW chars = u"\n\t\r\\\"", ::StringW replacements = u"ntr\\\"");

  /// @brief Method Unescape, addr 0x2b17bfc, size 0x15c, virtual false, abstract: false, final false
  /// @param chars: ::StringW (default: u"ntr\\\"")
  /// @param replacements: ::StringW (default: u"\n\t\r\\\"")
  static inline ::StringW Unescape(::StringW str, ::StringW chars = u"ntr\\\"", ::StringW replacements = u"\n\t\r\\\"");

  /// @brief Method Contains, addr 0x2b17d58, size 0x20, virtual false, abstract: false, final false
  static inline bool Contains(::StringW str, char16_t ch);

  /// @brief Method Contains, addr 0x2b17d78, size 0x20, virtual false, abstract: false, final false
  static inline bool Contains(::StringW str, ::StringW text, ::System::StringComparison comparison);

  /// @brief Method GetPlural, addr 0x2b17d98, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW GetPlural(::StringW str);

  /// @brief Method NicifyMemorySize, addr 0x2b17f40, size 0x130, virtual false, abstract: false, final false
  static inline ::StringW NicifyMemorySize(int64_t numBytes);

  /// @brief Method FromNicifiedMemorySize, addr 0x2b18070, size 0x184, virtual false, abstract: false, final false
  /// @param defaultMultiplier: int64_t (default: static_cast<int64_t>(0x1))
  static inline bool FromNicifiedMemorySize(::StringW text, ByRef<int64_t> result, int64_t defaultMultiplier = static_cast<int64_t>(0x1));

  /// @brief Method CountOccurrences, addr 0x2b14e70, size 0x70, virtual false, abstract: false, final false
  static inline int32_t CountOccurrences(::StringW str, char16_t ch);

  /// @brief Method Tokenize, addr 0x2b181f4, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>* Tokenize(::StringW str);

  /// @brief Method Split, addr 0x2b182a0, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Split(::StringW str, ::System::Func_2<char16_t, bool>* predicate);

  /// @brief Method Join, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline ::StringW Join(::StringW separator, ::ArrayW<TValue, ::Array<TValue>*> values);

  /// @brief Method Join, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline ::StringW Join(::System::Collections::Generic::IEnumerable_1<TValue>* values, ::StringW separator);

  /// @brief Method MakeUniqueName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TExisting>
  static inline ::StringW MakeUniqueName(::StringW baseName, ::System::Collections::Generic::IEnumerable_1<TExisting>* existingSet, ::System::Func_2<TExisting, ::StringW>* getNameFunc);

  /// @brief Method CharacterSeparatedListsHaveAtLeastOneCommonElement, addr 0x2b1835c, size 0x29c, virtual false, abstract: false, final false
  static inline bool CharacterSeparatedListsHaveAtLeastOneCommonElement(::StringW firstList, ::StringW secondList, char16_t separator);

  /// @brief Method ParseInt, addr 0x2b185f8, size 0x84, virtual false, abstract: false, final false
  static inline int32_t ParseInt(::StringW str, int32_t pos);

  /// @brief Method WriteStringToBuffer, addr 0x2b1867c, size 0x1c, virtual false, abstract: false, final false
  static inline bool WriteStringToBuffer(::StringW text, void* buffer, int32_t bufferSizeInCharacters);

  /// @brief Method WriteStringToBuffer, addr 0x2b18698, size 0x1f0, virtual false, abstract: false, final false
  static inline bool WriteStringToBuffer(::StringW text, void* buffer, int32_t bufferSizeInCharacters, ByRef<uint32_t> offset);

  /// @brief Method ReadStringFromBuffer, addr 0x2b18888, size 0x18, virtual false, abstract: false, final false
  static inline ::StringW ReadStringFromBuffer(void* buffer, int32_t bufferSize);

  /// @brief Method ReadStringFromBuffer, addr 0x2b188a0, size 0x13c, virtual false, abstract: false, final false
  static inline ::StringW ReadStringFromBuffer(void* buffer, int32_t bufferSize, ByRef<uint32_t> offset);

  /// @brief Method IsPrintable, addr 0x2b189dc, size 0x8c, virtual false, abstract: false, final false
  static inline bool IsPrintable(char16_t ch);

  /// @brief Method WithAllWhitespaceStripped, addr 0x2b18a68, size 0xf0, virtual false, abstract: false, final false
  static inline ::StringW WithAllWhitespaceStripped(::StringW str);

  /// @brief Method InvariantEqualsIgnoreCase, addr 0x2b18b58, size 0x4c, virtual false, abstract: false, final false
  static inline bool InvariantEqualsIgnoreCase(::StringW left, ::StringW right);

  /// @brief Method ExpandTemplateString, addr 0x2b18ba4, size 0x1c8, virtual false, abstract: false, final false
  static inline ::StringW ExpandTemplateString(::StringW _cordl_template, ::System::Func_2<::StringW, ::StringW>* mapFunc);

  // Ctor Parameters [CppParam { name: "", ty: "StringHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringHelpers(StringHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringHelpers(StringHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::StringHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::StringHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::StringHelpers*, "UnityEngine.InputSystem.Utilities", "StringHelpers");
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9*, "UnityEngine.InputSystem.Utilities", "StringHelpers/<Split>d__9");
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8*, "UnityEngine.InputSystem.Utilities", "StringHelpers/<Tokenize>d__8");
