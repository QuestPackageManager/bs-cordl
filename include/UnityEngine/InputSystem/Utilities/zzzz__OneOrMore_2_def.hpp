#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/OneOrMore_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OneOrMore_2)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue, typename TList> class OneOrMore_2_Enumerator;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue, typename TList> class OneOrMore_2_Enumerator;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue, typename TList> struct OneOrMore_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::OneOrMore_2_Enumerator);
MARK_GEN_VAL_T(::UnityEngine::InputSystem::Utilities::OneOrMore_2);
// Dependencies
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue, typename TList>
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.OneOrMore`2<TValue,TList>
struct CORDL_TYPE OneOrMore_2 {
public:
  // Declarations
  using Enumerator = ::UnityEngine::InputSystem::Utilities::OneOrMore_2_Enumerator<TValue, TList>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) TValue Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TValue>*();

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*();

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<TValue>"
  constexpr operator ::System::Collections::Generic::IReadOnlyList_1<TValue>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TValue>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TList multiple);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TValue single);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* i___System__Collections__Generic__IEnumerable_1_TValue_();

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TValue>* i___System__Collections__Generic__IReadOnlyCollection_1_TValue_();

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<TValue>"
  constexpr ::System::Collections::Generic::IReadOnlyList_1<TValue>* i___System__Collections__Generic__IReadOnlyList_1_TValue_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList> op_Implicit___UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue_TList_(TList multiple);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList> op_Implicit___UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue_TList_(TValue single);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OneOrMore_2();

  // Ctor Parameters [CppParam { name: "m_IsSingle", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Single", ty: "TValue", modifiers: "", def_value: None }, CppParam { name:
  // "m_Multiple", ty: "TList", modifiers: "", def_value: None }]
  constexpr OneOrMore_2(bool m_IsSingle, TValue m_Single, TList m_Multiple) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9165 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_IsSingle, offset: 0x0, size: 0x1, def value: None
  bool m_IsSingle;

  /// @brief Field m_Single, offset: 0x8, size: 0x8, def value: None
  TValue m_Single;

  /// @brief Field m_Multiple, offset: 0x10, size: 0x8, def value: None
  TList m_Multiple;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
// Dependencies System.Object, UnityEngine.InputSystem.Utilities.OneOrMore`2<TValue, TList>
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue, typename TList>
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.OneOrMore`2/Enumerator<TValue,TList>
class CORDL_TYPE OneOrMore_2_Enumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) TValue Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field m_Index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  /// @brief Field m_List, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get_m_List, put = __cordl_internal_set_m_List)) ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList> m_List;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::InputSystem::Utilities::OneOrMore_2_Enumerator<TValue, TList>* New_ctor();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr int32_t const& __cordl_internal_get_m_Index() const;

  constexpr int32_t& __cordl_internal_get_m_Index();

  constexpr ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList> const& __cordl_internal_get_m_List() const;

  constexpr ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>& __cordl_internal_get_m_List();

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  constexpr void __cordl_internal_set_m_List(::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* i___System__Collections__Generic__IEnumerator_1_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OneOrMore_2_Enumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OneOrMore_2_Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OneOrMore_2_Enumerator(OneOrMore_2_Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OneOrMore_2_Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OneOrMore_2_Enumerator(OneOrMore_2_Enumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9164 };

  /// @brief Field m_Index, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Index;

  /// @brief Field m_List, offset: 0x18, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList> ___m_List;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::OneOrMore_2_Enumerator, "UnityEngine.InputSystem.Utilities", "OneOrMore`2/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::OneOrMore_2, "UnityEngine.InputSystem.Utilities", "OneOrMore`2");
