#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/EnhancedTouch/TouchHistory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__TouchHistory_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchHistory)
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
namespace UnityEngine::InputSystem::EnhancedTouch {
class Finger;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
class __TouchHistory__Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
template <typename TValue> class InputStateHistory_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
// Forward declare root types
namespace UnityEngine::InputSystem::EnhancedTouch {
class __TouchHistory__Enumerator;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct TouchHistory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator);
MARK_VAL_T(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory);
// Type: UnityEngine.InputSystem.EnhancedTouch::TouchHistory
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.EnhancedTouch::TouchHistory
struct CORDL_TYPE TouchHistory {
public:
  // Declarations
  using Enumerator = ::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item))::UnityEngine::InputSystem::EnhancedTouch::Touch Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*();

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*();

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
  constexpr operator ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method CheckValid, addr 0x31530c8, size 0x9c, virtual false, abstract: false, final false
  inline void CheckValid();

  /// @brief Method GetEnumerator, addr 0x3152ecc, size 0x80, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3152f80, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x31504c0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger* finger, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* history,
                    int32_t startIndex, int32_t count);

  /// @brief Method get_Count, addr 0x3152f84, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x3152f8c, size 0x13c, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::EnhancedTouch::Touch get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__EnhancedTouch__Touch_();

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*
  i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__InputSystem__EnhancedTouch__Touch_();

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
  constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*
  i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__InputSystem__EnhancedTouch__Touch_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchHistory();

  // Ctor Parameters [CppParam { name: "m_History", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*", modifiers: "", def_value: None
  // }, CppParam { name: "m_Finger", ty: "::UnityEngine::InputSystem::EnhancedTouch::Finger*", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr TouchHistory(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* m_History,
                         ::UnityEngine::InputSystem::EnhancedTouch::Finger* m_Finger, int32_t m_Count, int32_t m_StartIndex, uint32_t m_Version) noexcept;

  /// @brief Field m_History, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* m_History;

  /// @brief Field m_Finger, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::EnhancedTouch::Finger* m_Finger;

  /// @brief Field m_Count, offset: 0x10, size: 0x4, def value: None
  int32_t m_Count;

  /// @brief Field m_StartIndex, offset: 0x14, size: 0x4, def value: None
  int32_t m_StartIndex;

  /// @brief Field m_Version, offset: 0x18, size: 0x4, def value: None
  uint32_t m_Version;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory, m_History) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory, m_Finger) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory, m_Count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory, m_StartIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory, m_Version) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
// Type: ::Enumerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// CS Name: ::TouchHistory::Enumerator*
class CORDL_TYPE __TouchHistory__Enumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::UnityEngine::InputSystem::EnhancedTouch::Touch Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field m_Index, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  /// @brief Field m_Owner, offset 0x10, size 0x20
  __declspec(property(get = __cordl_internal_get_m_Owner, put = __cordl_internal_set_m_Owner))::UnityEngine::InputSystem::EnhancedTouch::TouchHistory m_Owner;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x3153258, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x3153164, size 0x2c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator* New_ctor(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory owner);

  /// @brief Method Reset, addr 0x3153190, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x31531dc, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr int32_t const& __cordl_internal_get_m_Index() const;

  constexpr int32_t& __cordl_internal_get_m_Index();

  constexpr ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory const& __cordl_internal_get_m_Owner() const;

  constexpr ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory& __cordl_internal_get_m_Owner();

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  constexpr void __cordl_internal_set_m_Owner(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory value);

  /// @brief Method .ctor, addr 0x3152f4c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory owner);

  /// @brief Method get_Current, addr 0x315319c, size 0x40, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::EnhancedTouch::Touch get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__EnhancedTouch__Touch_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TouchHistory__Enumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TouchHistory__Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TouchHistory__Enumerator(__TouchHistory__Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TouchHistory__Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TouchHistory__Enumerator(__TouchHistory__Enumerator const&) = delete;

  /// @brief Field m_Owner, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory ___m_Owner;

  /// @brief Field m_Index, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator, ___m_Owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator, ___m_Index) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
NEED_NO_BOX(::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator*, "UnityEngine.InputSystem.EnhancedTouch", "TouchHistory/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory, "UnityEngine.InputSystem.EnhancedTouch", "TouchHistory");
