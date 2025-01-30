#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateHistory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateHistory)
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
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateHistory_Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateHistory_RecordHeader;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateHistory_Record;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::LowLevel {
struct RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputStateHistory;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateHistory_Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateHistory_Record;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateHistory_RecordHeader;
}
namespace UnityEngine::InputSystem::LowLevel {
struct RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputStateHistory);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory/Record
struct CORDL_TYPE InputStateHistory_Record {
public:
  // Declarations
  __declspec(property(get = get_control)) ::UnityEngine::InputSystem::InputControl* control;

  __declspec(property(get = get_header)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader> header;

  __declspec(property(get = get_index)) int32_t index;

  __declspec(property(get = get_next)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record next;

  __declspec(property(get = get_owner)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory* owner;

  __declspec(property(get = get_previous)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record previous;

  __declspec(property(get = get_recordIndex)) int32_t recordIndex;

  __declspec(property(get = get_time)) double_t time;

  __declspec(property(get = get_valid)) bool valid;

  __declspec(property(get = get_version)) uint32_t version;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*();

  /// @brief Method CheckValid, addr 0x4619768, size 0xa8, virtual false, abstract: false, final false
  inline void CheckValid();

  /// @brief Method CopyFrom, addr 0x4617eb4, size 0x374, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record record);

  /// @brief Method Equals, addr 0x4619be8, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4619bb4, size 0x34, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record other);

  /// @brief Method GetHashCode, addr 0x4619c80, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetUnsafeExtraMemoryPtr, addr 0x4619ad0, size 0x18, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> GetUnsafeExtraMemoryPtr();

  /// @brief Method GetUnsafeExtraMemoryPtrUnchecked, addr 0x4619ae8, size 0xcc, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> GetUnsafeExtraMemoryPtrUnchecked();

  /// @brief Method GetUnsafeMemoryPtr, addr 0x4619a38, size 0x18, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> GetUnsafeMemoryPtr();

  /// @brief Method GetUnsafeMemoryPtrUnchecked, addr 0x4619a50, size 0x80, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> GetUnsafeMemoryPtrUnchecked();

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline TValue ReadValue();

  /// @brief Method ReadValueAsObject, addr 0x4619a00, size 0x38, virtual false, abstract: false, final false
  inline ::System::Object* ReadValueAsObject();

  /// @brief Method ToString, addr 0x4619cc8, size 0xd8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4617d5c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory* owner, int32_t index, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader> header);

  /// @brief Method get_control, addr 0x4619838, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* get_control();

  /// @brief Method get_header, addr 0x46196a4, size 0x24, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader> get_header();

  /// @brief Method get_index, addr 0x461972c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_next, addr 0x46198e8, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record get_next();

  /// @brief Method get_owner, addr 0x4619724, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* get_owner();

  /// @brief Method get_previous, addr 0x4619978, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record get_previous();

  /// @brief Method get_recordIndex, addr 0x46196c8, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_recordIndex();

  /// @brief Method get_time, addr 0x4619810, size 0x28, virtual false, abstract: false, final false
  inline double_t get_time();

  /// @brief Method get_valid, addr 0x46196dc, size 0x48, virtual false, abstract: false, final false
  inline bool get_valid();

  /// @brief Method get_version, addr 0x46196d4, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_version();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* i___System__IEquatable_1___UnityEngine__InputSystem__LowLevel__InputStateHistory_Record_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputStateHistory_Record();

  // Ctor Parameters [CppParam { name: "m_Owner", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory*", modifiers: "", def_value: None }, CppParam { name: "m_IndexPlusOne", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr InputStateHistory_Record(::UnityEngine::InputSystem::LowLevel::InputStateHistory* m_Owner, int32_t m_IndexPlusOne, uint32_t m_Version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6981 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Owner, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputStateHistory* m_Owner;

  /// @brief Field m_IndexPlusOne, offset: 0x8, size: 0x4, def value: None
  int32_t m_IndexPlusOne;

  /// @brief Field m_Version, offset: 0xc, size: 0x4, def value: None
  uint32_t m_Version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record, m_Owner) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record, m_IndexPlusOne) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record, m_Version) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, UnityEngine.InputSystem.LowLevel.InputStateHistory::Record
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct CORDL_TYPE InputStateHistory_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x46196a0, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x46195d8, size 0x38, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x4619610, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x461963c, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x4618fd0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory* history);

  /// @brief Method get_Current, addr 0x461961c, size 0x20, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__LowLevel__InputStateHistory_Record_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputStateHistory_Enumerator();

  // Ctor Parameters [CppParam { name: "m_History", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory*", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr InputStateHistory_Enumerator(::UnityEngine::InputSystem::LowLevel::InputStateHistory* m_History, int32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6977 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_History, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputStateHistory* m_History;

  /// @brief Field m_Index, offset: 0x8, size: 0x4, def value: None
  int32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator, m_History) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator, m_Index) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader/<m_StateWithControlIndex>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6978 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer, 0x1>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader/<m_StateWithoutControlIndex>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6979 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer, 0x1>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies UnityEngine.InputSystem.LowLevel.InputStateHistory::RecordHeader::<m_StateWithControlIndex>e__FixedBuffer,
// UnityEngine.InputSystem.LowLevel.InputStateHistory::RecordHeader::<m_StateWithoutControlIndex>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader
struct CORDL_TYPE InputStateHistory_RecordHeader {
public:
  // Declarations
  using _m_StateWithControlIndex_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer;

  using _m_StateWithoutControlIndex_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer;

  /// @brief Field controlIndex, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_controlIndex, put = __cordl_internal_set_controlIndex)) int32_t controlIndex;

  /// @brief Field m_StateWithControlIndex, offset 0x10, size 0x1
  __declspec(property(
      get = __cordl_internal_get_m_StateWithControlIndex,
      put = __cordl_internal_set_m_StateWithControlIndex)) ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer m_StateWithControlIndex;

  /// @brief Field m_StateWithoutControlIndex, offset 0xc, size 0x1
  __declspec(property(
      get = __cordl_internal_get_m_StateWithoutControlIndex,
      put =
          __cordl_internal_set_m_StateWithoutControlIndex)) ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer m_StateWithoutControlIndex;

  __declspec(property(get = get_statePtrWithControlIndex)) ::cordl_internals::Ptr<uint8_t> statePtrWithControlIndex;

  __declspec(property(get = get_statePtrWithoutControlIndex)) ::cordl_internals::Ptr<uint8_t> statePtrWithoutControlIndex;

  /// @brief Field time, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) double_t time;

  /// @brief Field version, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) uint32_t version;

  constexpr int32_t const& __cordl_internal_get_controlIndex() const;

  constexpr int32_t& __cordl_internal_get_controlIndex();

  constexpr ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer const& __cordl_internal_get_m_StateWithControlIndex() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer& __cordl_internal_get_m_StateWithControlIndex();

  constexpr ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer const& __cordl_internal_get_m_StateWithoutControlIndex() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer& __cordl_internal_get_m_StateWithoutControlIndex();

  constexpr double_t const& __cordl_internal_get_time() const;

  constexpr double_t& __cordl_internal_get_time();

  constexpr uint32_t const& __cordl_internal_get_version() const;

  constexpr uint32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_controlIndex(int32_t value);

  constexpr void __cordl_internal_set_m_StateWithControlIndex(::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer value);

  constexpr void __cordl_internal_set_m_StateWithoutControlIndex(::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer value);

  constexpr void __cordl_internal_set_time(double_t value);

  constexpr void __cordl_internal_set_version(uint32_t value);

  /// @brief Method get_statePtrWithControlIndex, addr 0x4618f68, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<uint8_t> get_statePtrWithControlIndex();

  /// @brief Method get_statePtrWithoutControlIndex, addr 0x4618f60, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<uint8_t> get_statePtrWithoutControlIndex();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputStateHistory_RecordHeader();

  // Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "version", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "controlIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_StateWithoutControlIndex", ty:
  // "::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "m_StateWithControlIndex",
  // ty: "::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr InputStateHistory_RecordHeader(double_t time, uint32_t version, int32_t controlIndex,
                                           ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer m_StateWithoutControlIndex,
                                           ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer m_StateWithControlIndex) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___time_padding[0x0];
      /// @brief Field time, offset: 0x0, size: 0x8, def value: None
      double_t ___time;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___time_padding_forAlignment[0x0];
      /// @brief Field time, offset: 0x0, size: 0x8, def value: None
      double_t ___time_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___version_padding[0x8];
      /// @brief Field version, offset: 0x8, size: 0x4, def value: None
      uint32_t ___version;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___version_padding_forAlignment[0x8];
      /// @brief Field version, offset: 0x8, size: 0x4, def value: None
      uint32_t ___version_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___controlIndex_padding[0xc];
      /// @brief Field controlIndex, offset: 0xc, size: 0x4, def value: None
      int32_t ___controlIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___controlIndex_padding_forAlignment[0xc];
      /// @brief Field controlIndex, offset: 0xc, size: 0x4, def value: None
      int32_t ___controlIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___m_StateWithoutControlIndex_padding[0xc];
      /// @brief Field m_StateWithoutControlIndex, offset: 0xc, size: 0x1, def value: None
      ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer ___m_StateWithoutControlIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___m_StateWithoutControlIndex_padding_forAlignment[0xc];
      /// @brief Field m_StateWithoutControlIndex, offset: 0xc, size: 0x1, def value: None
      ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer ___m_StateWithoutControlIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___m_StateWithControlIndex_padding[0x10];
      /// @brief Field m_StateWithControlIndex, offset: 0x10, size: 0x1, def value: None
      ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer ___m_StateWithControlIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___m_StateWithControlIndex_padding_forAlignment[0x10];
      /// @brief Field m_StateWithControlIndex, offset: 0x10, size: 0x1, def value: None
      ::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer ___m_StateWithControlIndex_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6980 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field kSizeWithControlIndex offset 0xffffffff size 0x4
  static constexpr int32_t kSizeWithControlIndex{ static_cast<int32_t>(0x10) };

  /// @brief Field kSizeWithoutControlIndex offset 0xffffffff size 0x4
  static constexpr int32_t kSizeWithoutControlIndex{ static_cast<int32_t>(0xc) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.IDisposable, System.Nullable`1<T>, System.Object, Unity.Collections.NativeArray`1<T>,
// UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor, UnityEngine.InputSystem.LowLevel.InputStateHistory::Record, UnityEngine.InputSystem.LowLevel.InputUpdateType
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory
class CORDL_TYPE InputStateHistory : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator;

  using Record = ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record;

  using RecordHeader = ::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item, put = set_Item)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record Item[];

  /// @brief Field <onRecordAdded>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__onRecordAdded_k__BackingField,
                      put = __cordl_internal_set__onRecordAdded_k__BackingField)) ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* _onRecordAdded_k__BackingField;

  /// @brief Field <onShouldRecordStateChange>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__onShouldRecordStateChange_k__BackingField, put = __cordl_internal_set__onShouldRecordStateChange_k__BackingField)) ::System::Func_4<
      ::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* _onShouldRecordStateChange_k__BackingField;

  __declspec(property(get = get_bytesPerRecord)) int32_t bytesPerRecord;

  __declspec(property(get = get_controls)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> controls;

  __declspec(property(get = get_extraMemoryPerRecord, put = set_extraMemoryPerRecord)) int32_t extraMemoryPerRecord;

  __declspec(property(get = get_historyDepth, put = set_historyDepth)) int32_t historyDepth;

  /// @brief Field m_AddNewControls, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AddNewControls, put = __cordl_internal_set_m_AddNewControls)) bool m_AddNewControls;

  /// @brief Field m_ControlCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ControlCount, put = __cordl_internal_set_m_ControlCount)) int32_t m_ControlCount;

  /// @brief Field m_Controls, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Controls,
                      put = __cordl_internal_set_m_Controls)) ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>
      m_Controls;

  /// @brief Field m_CurrentVersion, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentVersion, put = __cordl_internal_set_m_CurrentVersion)) uint32_t m_CurrentVersion;

  /// @brief Field m_ExtraMemoryPerRecord, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ExtraMemoryPerRecord, put = __cordl_internal_set_m_ExtraMemoryPerRecord)) int32_t m_ExtraMemoryPerRecord;

  /// @brief Field m_HeadIndex, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HeadIndex, put = __cordl_internal_set_m_HeadIndex)) int32_t m_HeadIndex;

  /// @brief Field m_HistoryDepth, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HistoryDepth, put = __cordl_internal_set_m_HistoryDepth)) int32_t m_HistoryDepth;

  /// @brief Field m_RecordBuffer, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_m_RecordBuffer, put = __cordl_internal_set_m_RecordBuffer)) ::Unity::Collections::NativeArray_1<uint8_t> m_RecordBuffer;

  /// @brief Field m_RecordCount, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RecordCount, put = __cordl_internal_set_m_RecordCount)) int32_t m_RecordCount;

  /// @brief Field m_StateSizeInBytes, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StateSizeInBytes, put = __cordl_internal_set_m_StateSizeInBytes)) int32_t m_StateSizeInBytes;

  /// @brief Field m_UpdateMask, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdateMask, put = __cordl_internal_set_m_UpdateMask)) ::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType> m_UpdateMask;

  __declspec(property(get = get_onRecordAdded, put = set_onRecordAdded)) ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* onRecordAdded;

  __declspec(property(
      get = get_onShouldRecordStateChange,
      put = set_onShouldRecordStateChange)) ::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* onShouldRecordStateChange;

  __declspec(property(get = get_updateMask, put = set_updateMask)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask;

  __declspec(property(get = get_version)) uint32_t version;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept;

  /// @brief Method AddRecord, addr 0x46186d0, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record AddRecord(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record record);

  /// @brief Method Allocate, addr 0x4619048, size 0x29c, virtual false, abstract: false, final false
  inline void Allocate();

  /// @brief Method AllocateRecord, addr 0x4618738, size 0x108, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader> AllocateRecord(::ByRef<int32_t> index);

  /// @brief Method Clear, addr 0x46186bc, size 0x14, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Destroy, addr 0x4618fe4, size 0x64, virtual false, abstract: false, final false
  inline void Destroy();

  /// @brief Method Dispose, addr 0x4618654, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x46185c0, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetEnumerator, addr 0x4618f70, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* GetEnumerator();

  /// @brief Method GetRecord, addr 0x4617c84, size 0xd8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader> GetRecord(int32_t index);

  /// @brief Method GetRecordUnchecked, addr 0x4619358, size 0xac, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader> GetRecordUnchecked(int32_t index);

  static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* New_ctor(::UnityEngine::InputSystem::InputControl* control);

  static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* controls);

  static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* New_ctor(int32_t maxStateSizeInBytes);

  static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* New_ctor(::StringW path);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline TValue ReadValue(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader> data);

  /// @brief Method ReadValueAsObject, addr 0x4619404, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Object* ReadValueAsObject(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader> data);

  /// @brief Method RecordIndexToUserIndex, addr 0x4619334, size 0x24, virtual false, abstract: false, final false
  inline int32_t RecordIndexToUserIndex(int32_t index);

  /// @brief Method RecordStateChange, addr 0x4618af4, size 0x1b4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record RecordStateChange(::UnityEngine::InputSystem::InputControl* control,
                                                                                          ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method RecordStateChange, addr 0x4618ca8, size 0x2b8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record RecordStateChange(::UnityEngine::InputSystem::InputControl* control, ::cordl_internals::Ptr<void> statePtr, double_t time);

  /// @brief Method StartRecording, addr 0x4618840, size 0x15c, virtual false, abstract: false, final false
  inline void StartRecording();

  /// @brief Method StopRecording, addr 0x461899c, size 0x158, virtual false, abstract: false, final false
  inline void StopRecording();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x4618fe0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged, addr 0x46194fc, size 0xd8, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, double_t time,
                                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired, addr 0x46195d4, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, double_t time, int64_t monitorIndex, int32_t timerIndex);

  /// @brief Method UserIndexToRecordIndex, addr 0x4617c6c, size 0x18, virtual false, abstract: false, final false
  inline int32_t UserIndexToRecordIndex(int32_t index);

  constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* const& __cordl_internal_get__onRecordAdded_k__BackingField() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*& __cordl_internal_get__onRecordAdded_k__BackingField();

  constexpr ::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* const&
  __cordl_internal_get__onShouldRecordStateChange_k__BackingField() const;

  constexpr ::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>*&
  __cordl_internal_get__onShouldRecordStateChange_k__BackingField();

  constexpr bool const& __cordl_internal_get_m_AddNewControls() const;

  constexpr bool& __cordl_internal_get_m_AddNewControls();

  constexpr int32_t const& __cordl_internal_get_m_ControlCount() const;

  constexpr int32_t& __cordl_internal_get_m_ControlCount();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> const& __cordl_internal_get_m_Controls() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>& __cordl_internal_get_m_Controls();

  constexpr uint32_t const& __cordl_internal_get_m_CurrentVersion() const;

  constexpr uint32_t& __cordl_internal_get_m_CurrentVersion();

  constexpr int32_t const& __cordl_internal_get_m_ExtraMemoryPerRecord() const;

  constexpr int32_t& __cordl_internal_get_m_ExtraMemoryPerRecord();

  constexpr int32_t const& __cordl_internal_get_m_HeadIndex() const;

  constexpr int32_t& __cordl_internal_get_m_HeadIndex();

  constexpr int32_t const& __cordl_internal_get_m_HistoryDepth() const;

  constexpr int32_t& __cordl_internal_get_m_HistoryDepth();

  constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_m_RecordBuffer() const;

  constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_m_RecordBuffer();

  constexpr int32_t const& __cordl_internal_get_m_RecordCount() const;

  constexpr int32_t& __cordl_internal_get_m_RecordCount();

  constexpr int32_t const& __cordl_internal_get_m_StateSizeInBytes() const;

  constexpr int32_t& __cordl_internal_get_m_StateSizeInBytes();

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType> const& __cordl_internal_get_m_UpdateMask() const;

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>& __cordl_internal_get_m_UpdateMask();

  constexpr void __cordl_internal_set__onRecordAdded_k__BackingField(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* value);

  constexpr void __cordl_internal_set__onShouldRecordStateChange_k__BackingField(
      ::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* value);

  constexpr void __cordl_internal_set_m_AddNewControls(bool value);

  constexpr void __cordl_internal_set_m_ControlCount(int32_t value);

  constexpr void __cordl_internal_set_m_Controls(::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> value);

  constexpr void __cordl_internal_set_m_CurrentVersion(uint32_t value);

  constexpr void __cordl_internal_set_m_ExtraMemoryPerRecord(int32_t value);

  constexpr void __cordl_internal_set_m_HeadIndex(int32_t value);

  constexpr void __cordl_internal_set_m_HistoryDepth(int32_t value);

  constexpr void __cordl_internal_set_m_RecordBuffer(::Unity::Collections::NativeArray_1<uint8_t> value);

  constexpr void __cordl_internal_set_m_RecordCount(int32_t value);

  constexpr void __cordl_internal_set_m_StateSizeInBytes(int32_t value);

  constexpr void __cordl_internal_set_m_UpdateMask(::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType> value);

  /// @brief Method .ctor, addr 0x461844c, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method .ctor, addr 0x4618544, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* controls);

  /// @brief Method .ctor, addr 0x4618248, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxStateSizeInBytes);

  /// @brief Method .ctor, addr 0x46182f4, size 0x158, virtual false, abstract: false, final false
  inline void _ctor(::StringW path);

  /// @brief Method get_Count, addr 0x46177e8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x4617b5c, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record get_Item(int32_t index);

  /// @brief Method get_bytesPerRecord, addr 0x46192e4, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_bytesPerRecord();

  /// @brief Method get_controls, addr 0x4617af4, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> get_controls();

  /// @brief Method get_extraMemoryPerRecord, addr 0x46178c8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_extraMemoryPerRecord();

  /// @brief Method get_historyDepth, addr 0x46177f8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_historyDepth();

  /// @brief Method get_onRecordAdded, addr 0x4618228, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* get_onRecordAdded();

  /// @brief Method get_onShouldRecordStateChange, addr 0x4618238, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* get_onShouldRecordStateChange();

  /// @brief Method get_updateMask, addr 0x4617998, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_updateMask();

  /// @brief Method get_version, addr 0x46177f0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_version();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__LowLevel__InputStateHistory_Record_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* i___UnityEngine__InputSystem__LowLevel__IInputStateChangeMonitor() noexcept;

  /// @brief Method set_Item, addr 0x4617d84, size 0x130, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record value);

  /// @brief Method set_extraMemoryPerRecord, addr 0x46178d0, size 0xc8, virtual false, abstract: false, final false
  inline void set_extraMemoryPerRecord(int32_t value);

  /// @brief Method set_historyDepth, addr 0x4617800, size 0xc8, virtual false, abstract: false, final false
  inline void set_historyDepth(int32_t value);

  /// @brief Method set_onRecordAdded, addr 0x4618230, size 0x8, virtual false, abstract: false, final false
  inline void set_onRecordAdded(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* value);

  /// @brief Method set_onShouldRecordStateChange, addr 0x4618240, size 0x8, virtual false, abstract: false, final false
  inline void set_onShouldRecordStateChange(::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* value);

  /// @brief Method set_updateMask, addr 0x4617a2c, size 0xc8, virtual false, abstract: false, final false
  inline void set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputStateHistory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputStateHistory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputStateHistory(InputStateHistory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputStateHistory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputStateHistory(InputStateHistory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6982 };

  /// @brief Field kDefaultHistorySize offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultHistorySize{ static_cast<int32_t>(0x80) };

  /// @brief Field <onRecordAdded>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* ____onRecordAdded_k__BackingField;

  /// @brief Field <onShouldRecordStateChange>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* ____onShouldRecordStateChange_k__BackingField;

  /// @brief Field m_Controls, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> ___m_Controls;

  /// @brief Field m_ControlCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_ControlCount;

  /// @brief Field m_RecordBuffer, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> ___m_RecordBuffer;

  /// @brief Field m_StateSizeInBytes, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_StateSizeInBytes;

  /// @brief Field m_RecordCount, offset: 0x44, size: 0x4, def value: None
  int32_t ___m_RecordCount;

  /// @brief Field m_HistoryDepth, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_HistoryDepth;

  /// @brief Field m_ExtraMemoryPerRecord, offset: 0x4c, size: 0x4, def value: None
  int32_t ___m_ExtraMemoryPerRecord;

  /// @brief Field m_HeadIndex, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_HeadIndex;

  /// @brief Field m_CurrentVersion, offset: 0x54, size: 0x4, def value: None
  uint32_t ___m_CurrentVersion;

  /// @brief Field m_UpdateMask, offset: 0x58, size: 0x8, def value: None
  ::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType> ___m_UpdateMask;

  /// @brief Field m_AddNewControls, offset: 0x60, size: 0x1, def value: None
  bool ___m_AddNewControls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ____onRecordAdded_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ____onShouldRecordStateChange_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_Controls) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_ControlCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_RecordBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_StateSizeInBytes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_RecordCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_HistoryDepth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_ExtraMemoryPerRecord) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_HeadIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_CurrentVersion) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_UpdateMask) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateHistory, ___m_AddNewControls) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputStateHistory, 0x68>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputStateHistory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputStateHistory*, "UnityEngine.InputSystem.LowLevel", "InputStateHistory");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Enumerator, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/Record");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/RecordHeader");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel",
                       "InputStateHistory/RecordHeader/<m_StateWithControlIndex>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel",
                       "InputStateHistory/RecordHeader/<m_StateWithoutControlIndex>e__FixedBuffer");
