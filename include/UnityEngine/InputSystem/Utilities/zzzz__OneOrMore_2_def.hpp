#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__OneOrMore_2_def.hpp"
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
template <typename TValue, typename TList> class __OneOrMore_2__Enumerator;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue, typename TList> class __OneOrMore_2__Enumerator;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue, typename TList> struct OneOrMore_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator);
MARK_GEN_VAL_T(::UnityEngine::InputSystem::Utilities::OneOrMore_2);
// Type: UnityEngine.InputSystem.Utilities::OneOrMore`2
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue, typename TList>
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5956))
// CS Name: ::UnityEngine.InputSystem.Utilities::OneOrMore`2<TValue,TList>
struct CORDL_TYPE OneOrMore_2 {
public:
  // Declarations
  using Enumerator = ::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) TValue Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<TValue>"
  constexpr operator ::System::Collections::Generic::IReadOnlyList_1<TValue>*();

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<TValue>"
  constexpr ::System::Collections::Generic::IReadOnlyList_1<TValue>* i___System__Collections__Generic__IReadOnlyList_1_TValue_();

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TValue>*();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* i___System__Collections__Generic__IEnumerable_1_TValue_();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*();

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TValue>* i___System__Collections__Generic__IReadOnlyCollection_1_TValue_();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Item(int32_t index);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TValue single);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TList multiple);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList> op_Implicit___UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue_TList_(TValue single);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList> op_Implicit___UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue_TList_(TList multiple);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TValue>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "m_IsSingle", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Single", ty: "TValue", modifiers: "", def_value: None }, CppParam { name:
  // "m_Multiple", ty: "TList", modifiers: "", def_value: None }]
  constexpr OneOrMore_2(bool m_IsSingle, TValue m_Single, TList m_Multiple) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OneOrMore_2();

  /// @brief Field m_IsSingle, offset: 0x0, size: 0x1, def value: None
  bool m_IsSingle;

  /// @brief Field m_Single, offset: 0x8, size: 0x8, def value: None
  TValue m_Single;

  /// @brief Field m_Multiple, offset: 0x10, size: 0x8, def value: None
  TList m_Multiple;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue, typename TList>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(5956)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5956), inst: 4775
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(5955)) CS Name: ::OneOrMore`2::Enumerator<TValue,TList>*
class CORDL_TYPE __OneOrMore_2__Enumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  /// @brief Field m_List, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get_m_List, put = __cordl_internal_set_m_List))::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList> m_List;

  __declspec(property(get = get_Current)) TValue Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TValue>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* i___System__Collections__Generic__IEnumerator_1_TValue_() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get_m_Index();

  constexpr int32_t const& __cordl_internal_get_m_Index() const;

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  constexpr ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>& __cordl_internal_get_m_List();

  constexpr ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList> const& __cordl_internal_get_m_List() const;

  constexpr void __cordl_internal_set_m_List(::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList> value);

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OneOrMore_2__Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OneOrMore_2__Enumerator(__OneOrMore_2__Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OneOrMore_2__Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OneOrMore_2__Enumerator(__OneOrMore_2__Enumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OneOrMore_2__Enumerator();

public:
  /// @brief Field m_Index, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Index;

  /// @brief Field m_List, offset: 0x18, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList> ___m_List;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator, "UnityEngine.InputSystem.Utilities", "OneOrMore`2/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::OneOrMore_2, "UnityEngine.InputSystem.Utilities", "OneOrMore`2");
