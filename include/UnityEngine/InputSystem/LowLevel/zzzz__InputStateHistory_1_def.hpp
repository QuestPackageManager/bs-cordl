#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateHistory_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateHistory_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
template <typename TValue> struct InputStateHistory_1_Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
template <typename TValue> struct InputStateHistory_1_Record;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateHistory_RecordHeader;
}
namespace UnityEngine::InputSystem {
template <typename TValue> class InputControl_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
template <typename TValue> class InputStateHistory_1;
}
namespace UnityEngine::InputSystem::LowLevel {
template <typename TValue> struct InputStateHistory_1_Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
template <typename TValue> struct InputStateHistory_1_Record;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1);
MARK_GEN_VAL_T(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Enumerator);
MARK_GEN_VAL_T(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template <typename TValue>
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory`1/Record<TValue>
struct CORDL_TYPE InputStateHistory_1_Record {
public:
  // Declarations
  __declspec(property(get = get_control)) ::UnityEngine::InputSystem::InputControl_1<TValue>* control;

  __declspec(property(get = get_header)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader> header;

  __declspec(property(get = get_index)) int32_t index;

  __declspec(property(get = get_next)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue> next;

  __declspec(property(get = get_owner)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* owner;

  __declspec(property(get = get_previous)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue> previous;

  __declspec(property(get = get_recordIndex)) int32_t recordIndex;

  __declspec(property(get = get_time)) double_t time;

  __declspec(property(get = get_valid)) bool valid;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>*();

  /// @brief Method CheckValid, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckValid();

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue> record);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue> other);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetUnsafeExtraMemoryPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> GetUnsafeExtraMemoryPtr();

  /// @brief Method GetUnsafeExtraMemoryPtrUnchecked, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> GetUnsafeExtraMemoryPtrUnchecked();

  /// @brief Method GetUnsafeMemoryPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> GetUnsafeMemoryPtr();

  /// @brief Method GetUnsafeMemoryPtrUnchecked, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> GetUnsafeMemoryPtrUnchecked();

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ReadValue();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* owner, int32_t index);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* owner, int32_t index,
                    ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader> header);

  /// @brief Method get_control, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl_1<TValue>* get_control();

  /// @brief Method get_header, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader> get_header();

  /// @brief Method get_index, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_next, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue> get_next();

  /// @brief Method get_owner, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* get_owner();

  /// @brief Method get_previous, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue> get_previous();

  /// @brief Method get_recordIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_recordIndex();

  /// @brief Method get_time, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline double_t get_time();

  /// @brief Method get_valid, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_valid();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>*
  i___System__IEquatable_1___UnityEngine__InputSystem__LowLevel__InputStateHistory_1_Record_TValue__();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputStateHistory_1_Record();

  // Ctor Parameters [CppParam { name: "m_Owner", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*", modifiers: "", def_value: None }, CppParam { name: "m_IndexPlusOne", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr InputStateHistory_1_Record(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* m_Owner, int32_t m_IndexPlusOne, uint32_t m_Version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6985 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Owner, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* m_Owner;

  /// @brief Field m_IndexPlusOne, offset: 0x8, size: 0x4, def value: None
  int32_t m_IndexPlusOne;

  /// @brief Field m_Version, offset: 0xc, size: 0x4, def value: None
  uint32_t m_Version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, UnityEngine.InputSystem.LowLevel.InputStateHistory`1::Record<TValue>
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template <typename TValue>
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory`1/Enumerator<TValue>
struct CORDL_TYPE InputStateHistory_1_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue> Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* history);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue> get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__LowLevel__InputStateHistory_1_Record_TValue__();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputStateHistory_1_Enumerator();

  // Ctor Parameters [CppParam { name: "m_History", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr InputStateHistory_1_Enumerator(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* m_History, int32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6984 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_History, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* m_History;

  /// @brief Field m_Index, offset: 0x8, size: 0x4, def value: None
  int32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IReadOnlyCollection`1<T>, System.Collections.Generic.IReadOnlyList`1<T>, System.Collections.IEnumerable,
// UnityEngine.InputSystem.LowLevel.InputStateHistory, UnityEngine.InputSystem.LowLevel.InputStateHistory`1::Record<TValue>
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory`1<TValue>
class CORDL_TYPE InputStateHistory_1 : public ::UnityEngine::InputSystem::LowLevel::InputStateHistory {
public:
  // Declarations
  using Enumerator = ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Enumerator<TValue>;

  using Record = ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>;

  __declspec(property(get = get_Item, put = set_Item)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue> Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>"
  constexpr operator ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method AddRecord, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue> AddRecord(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue> record);

  /// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>* GetEnumerator();

  static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* New_ctor(::UnityEngine::InputSystem::InputControl_1<TValue>* control);

  static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* New_ctor(::System::Nullable_1<int32_t> maxStateSizeInBytes);

  static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* New_ctor(::StringW path);

  /// @brief Method RecordStateChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue> RecordStateChange(::UnityEngine::InputSystem::InputControl_1<TValue>* control, TValue value, double_t time);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputControl_1<TValue>* control);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Nullable_1<int32_t> maxStateSizeInBytes);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW path);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue> get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__LowLevel__InputStateHistory_1_Record_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>*
  i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__InputSystem__LowLevel__InputStateHistory_1_Record_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>"
  constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue>>*
  i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__InputSystem__LowLevel__InputStateHistory_1_Record_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<TValue> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputStateHistory_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputStateHistory_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputStateHistory_1(InputStateHistory_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputStateHistory_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputStateHistory_1(InputStateHistory_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6986 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1, "UnityEngine.InputSystem.LowLevel", "InputStateHistory`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Enumerator, "UnityEngine.InputSystem.LowLevel", "InputStateHistory`1/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record, "UnityEngine.InputSystem.LowLevel", "InputStateHistory`1/Record");
