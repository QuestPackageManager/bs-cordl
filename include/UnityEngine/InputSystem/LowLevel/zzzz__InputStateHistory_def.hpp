#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateHistory)
namespace UnityEngine::InputSystem::LowLevel {
struct __InputStateHistory__Record;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputStateHistory__Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputStateHistory__RecordHeader;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace GlobalNamespace {
struct __InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer;
}
namespace GlobalNamespace {
struct __InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputStateHistory;
}
namespace GlobalNamespace {
struct __InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer;
}
namespace GlobalNamespace {
struct __InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputStateHistory__Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputStateHistory__Record;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputStateHistory__RecordHeader;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputStateHistory);
MARK_VAL_T(::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer);
MARK_VAL_T(::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Enumerator);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader);
// Type: ::Enumerator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6569))
// CS Name: ::InputStateHistory::Enumerator
struct CORDL_TYPE __InputStateHistory__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current))::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor addr 0x2af7d7c size 0x10 virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory* history);

  /// @brief Method MoveNext addr 0x2af8330 size 0x3c virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x2af836c size 0xc virtual true final true
  inline void Reset();

  /// @brief Method get_Current addr 0x2af8378 size 0x20 virtual true final true
  inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2af8398 size 0x64 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method Dispose addr 0x2af83fc size 0x4 virtual true final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "m_History", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory*", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr __InputStateHistory__Enumerator(::UnityEngine::InputSystem::LowLevel::InputStateHistory* m_History, int32_t m_Index) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputStateHistory__Enumerator();

  /// @brief Field m_History, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputStateHistory* m_History;

  /// @brief Field m_Index, offset: 0x8, size: 0x4, def value: None
  int32_t m_Index;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Enumerator, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: ::<m_StateWithoutControlIndex>e__FixedBuffer
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: Some(0) }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6570))
// CS Name: ::InputStateHistory::RecordHeader::<m_StateWithoutControlIndex>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer();

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<m_StateWithControlIndex>e__FixedBuffer
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: Some(0) }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6571))
// CS Name: ::InputStateHistory::RecordHeader::<m_StateWithControlIndex>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer();

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RecordHeader
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 17, calculated_native_size: 33, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6571)), TypeDefinitionIndex(TypeDefinitionIndex(6570))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6572))
// CS Name: ::InputStateHistory::RecordHeader
struct CORDL_TYPE __InputStateHistory__RecordHeader {
public:
  // Declarations
  using _m_StateWithControlIndex_e__FixedBuffer = ::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer;

  using _m_StateWithoutControlIndex_e__FixedBuffer = ::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer;

  /// @brief Field time, offset 0x0, size 0x8
  __declspec(property(get = __get_time, put = __set_time)) double_t time;

  /// @brief Field version, offset 0x8, size 0x4
  __declspec(property(get = __get_version, put = __set_version)) uint32_t version;

  /// @brief Field controlIndex, offset 0xc, size 0x4
  __declspec(property(get = __get_controlIndex, put = __set_controlIndex)) int32_t controlIndex;

  /// @brief Field m_StateWithoutControlIndex, offset 0xc, size 0x1
  __declspec(property(get = __get_m_StateWithoutControlIndex,
                      put = __set_m_StateWithoutControlIndex))::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer m_StateWithoutControlIndex;

  /// @brief Field m_StateWithControlIndex, offset 0x10, size 0x1
  __declspec(property(get = __get_m_StateWithControlIndex,
                      put = __set_m_StateWithControlIndex))::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer m_StateWithControlIndex;

  __declspec(property(get = get_statePtrWithControlIndex))::cordl_internals::Ptr<uint8_t> statePtrWithControlIndex;

  __declspec(property(get = get_statePtrWithoutControlIndex))::cordl_internals::Ptr<uint8_t> statePtrWithoutControlIndex;

  constexpr double_t& __get_time();

  constexpr double_t const& __get_time() const;

  constexpr void __set_time(double_t value);

  constexpr uint32_t& __get_version();

  constexpr uint32_t const& __get_version() const;

  constexpr void __set_version(uint32_t value);

  constexpr int32_t& __get_controlIndex();

  constexpr int32_t const& __get_controlIndex() const;

  constexpr void __set_controlIndex(int32_t value);

  constexpr ::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer& __get_m_StateWithoutControlIndex();

  constexpr ::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer const& __get_m_StateWithoutControlIndex() const;

  constexpr void __set_m_StateWithoutControlIndex(::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer value);

  constexpr ::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer& __get_m_StateWithControlIndex();

  constexpr ::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer const& __get_m_StateWithControlIndex() const;

  constexpr void __set_m_StateWithControlIndex(::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer value);

  /// @brief Method get_statePtrWithControlIndex addr 0x2af7d14 size 0x8 virtual false final false
  inline ::cordl_internals::Ptr<uint8_t> get_statePtrWithControlIndex();

  /// @brief Method get_statePtrWithoutControlIndex addr 0x2af7d0c size 0x8 virtual false final false
  inline ::cordl_internals::Ptr<uint8_t> get_statePtrWithoutControlIndex();

  // Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "version", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "controlIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_StateWithoutControlIndex", ty:
  // "::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "m_StateWithControlIndex", ty:
  // "::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr __InputStateHistory__RecordHeader(double_t time, uint32_t version, int32_t controlIndex,
                                              ::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer m_StateWithoutControlIndex,
                                              ::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer m_StateWithControlIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputStateHistory__RecordHeader();

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
      ::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer ___m_StateWithoutControlIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___m_StateWithoutControlIndex_padding_forAlignment[0xc];
      /// @brief Field m_StateWithoutControlIndex, offset: 0xc, size: 0x1, def value: None
      ::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer ___m_StateWithoutControlIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___m_StateWithControlIndex_padding[0x10];
      /// @brief Field m_StateWithControlIndex, offset: 0x10, size: 0x1, def value: None
      ::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer ___m_StateWithControlIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___m_StateWithControlIndex_padding_forAlignment[0x10];
      /// @brief Field m_StateWithControlIndex, offset: 0x10, size: 0x1, def value: None
      ::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer ___m_StateWithControlIndex_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field kSizeWithControlIndex offset 0xffffffff size 0x4
  static constexpr int32_t kSizeWithControlIndex{ static_cast<int32_t>(0x10) };

  /// @brief Field kSizeWithoutControlIndex offset 0xffffffff size 0x4
  static constexpr int32_t kSizeWithoutControlIndex{ static_cast<int32_t>(0xc) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: ::Record
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6573))
// CS Name: ::InputStateHistory::Record
struct CORDL_TYPE __InputStateHistory__Record {
public:
  // Declarations
  __declspec(property(get = get_header))::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader> header;

  __declspec(property(get = get_recordIndex)) int32_t recordIndex;

  __declspec(property(get = get_version)) uint32_t version;

  __declspec(property(get = get_valid)) bool valid;

  __declspec(property(get = get_owner))::UnityEngine::InputSystem::LowLevel::InputStateHistory* owner;

  __declspec(property(get = get_index)) int32_t index;

  __declspec(property(get = get_time)) double_t time;

  __declspec(property(get = get_control))::UnityEngine::InputSystem::InputControl* control;

  __declspec(property(get = get_next))::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record next;

  __declspec(property(get = get_previous))::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record previous;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record>*();

  /// @brief Method get_header addr 0x2af8400 size 0x24 virtual false final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader> get_header();

  /// @brief Method get_recordIndex addr 0x2af8424 size 0xc virtual false final false
  inline int32_t get_recordIndex();

  /// @brief Method get_version addr 0x2af8430 size 0x8 virtual false final false
  inline uint32_t get_version();

  /// @brief Method get_valid addr 0x2af8438 size 0x48 virtual false final false
  inline bool get_valid();

  /// @brief Method get_owner addr 0x2af8480 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* get_owner();

  /// @brief Method get_index addr 0x2af8488 size 0x3c virtual false final false
  inline int32_t get_index();

  /// @brief Method get_time addr 0x2af8574 size 0x28 virtual false final false
  inline double_t get_time();

  /// @brief Method get_control addr 0x2af859c size 0xb4 virtual false final false
  inline ::UnityEngine::InputSystem::InputControl* get_control();

  /// @brief Method get_next addr 0x2af8650 size 0x90 virtual false final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record get_next();

  /// @brief Method get_previous addr 0x2af86e0 size 0x88 virtual false final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record get_previous();

  /// @brief Method .ctor addr 0x2af6b10 size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory* owner, int32_t index,
                    ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader> header);

  /// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TValue> inline TValue ReadValue();

  /// @brief Method ReadValueAsObject addr 0x2af8768 size 0x38 virtual false final false
  inline ::System::Object* ReadValueAsObject();

  /// @brief Method GetUnsafeMemoryPtr addr 0x2af87a0 size 0x18 virtual false final false
  inline ::cordl_internals::Ptr<void> GetUnsafeMemoryPtr();

  /// @brief Method GetUnsafeMemoryPtrUnchecked addr 0x2af87b8 size 0x80 virtual false final false
  inline ::cordl_internals::Ptr<void> GetUnsafeMemoryPtrUnchecked();

  /// @brief Method GetUnsafeExtraMemoryPtr addr 0x2af8838 size 0x18 virtual false final false
  inline ::cordl_internals::Ptr<void> GetUnsafeExtraMemoryPtr();

  /// @brief Method GetUnsafeExtraMemoryPtrUnchecked addr 0x2af8850 size 0xd0 virtual false final false
  inline ::cordl_internals::Ptr<void> GetUnsafeExtraMemoryPtrUnchecked();

  /// @brief Method CopyFrom addr 0x2af6c70 size 0x380 virtual false final false
  inline void CopyFrom(::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record record);

  /// @brief Method CheckValid addr 0x2af84c4 size 0xb0 virtual false final false
  inline void CheckValid();

  /// @brief Method Equals addr 0x2af8920 size 0x34 virtual true final true
  inline bool Equals(::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record other);

  /// @brief Method Equals addr 0x2af8954 size 0x98 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2af89ec size 0x48 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2af8a34 size 0xd8 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "m_Owner", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory*", modifiers: "", def_value: None }, CppParam { name: "m_IndexPlusOne", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __InputStateHistory__Record(::UnityEngine::InputSystem::LowLevel::InputStateHistory* m_Owner, int32_t m_IndexPlusOne, uint32_t m_Version) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputStateHistory__Record();

  /// @brief Field m_Owner, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputStateHistory* m_Owner;

  /// @brief Field m_IndexPlusOne, offset: 0x8, size: 0x4, def value: None
  int32_t m_IndexPlusOne;

  /// @brief Field m_Version, offset: 0xc, size: 0x4, def value: None
  uint32_t m_Version;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputStateHistory
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(6553)), TypeDefinitionIndex(TypeDefinitionIndex(9999)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 741 }), TypeDefinitionIndex(TypeDefinitionIndex(2613)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2448), inst: 332 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6574)) CS Name: ::UnityEngine.InputSystem.LowLevel::InputStateHistory*
class CORDL_TYPE InputStateHistory : public ::System::Object {
public:
  // Declarations
  using Record = ::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record;

  using RecordHeader = ::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader;

  using Enumerator = ::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Enumerator;

  /// @brief Field <onRecordAdded>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__onRecordAdded_k__BackingField,
                      put = __set__onRecordAdded_k__BackingField))::System::Action_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record>* _onRecordAdded_k__BackingField;

  /// @brief Field <onShouldRecordStateChange>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__onShouldRecordStateChange_k__BackingField,
                      put = __set__onShouldRecordStateChange_k__BackingField))::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr,
                                                                                               bool>* _onShouldRecordStateChange_k__BackingField;

  /// @brief Field m_Controls, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Controls, put = __set_m_Controls))::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> m_Controls;

  /// @brief Field m_ControlCount, offset 0x28, size 0x4
  __declspec(property(get = __get_m_ControlCount, put = __set_m_ControlCount)) int32_t m_ControlCount;

  /// @brief Field m_RecordBuffer, offset 0x30, size 0x10
  __declspec(property(get = __get_m_RecordBuffer, put = __set_m_RecordBuffer))::Unity::Collections::NativeArray_1<uint8_t> m_RecordBuffer;

  /// @brief Field m_StateSizeInBytes, offset 0x40, size 0x4
  __declspec(property(get = __get_m_StateSizeInBytes, put = __set_m_StateSizeInBytes)) int32_t m_StateSizeInBytes;

  /// @brief Field m_RecordCount, offset 0x44, size 0x4
  __declspec(property(get = __get_m_RecordCount, put = __set_m_RecordCount)) int32_t m_RecordCount;

  /// @brief Field m_HistoryDepth, offset 0x48, size 0x4
  __declspec(property(get = __get_m_HistoryDepth, put = __set_m_HistoryDepth)) int32_t m_HistoryDepth;

  /// @brief Field m_ExtraMemoryPerRecord, offset 0x4c, size 0x4
  __declspec(property(get = __get_m_ExtraMemoryPerRecord, put = __set_m_ExtraMemoryPerRecord)) int32_t m_ExtraMemoryPerRecord;

  /// @brief Field m_HeadIndex, offset 0x50, size 0x4
  __declspec(property(get = __get_m_HeadIndex, put = __set_m_HeadIndex)) int32_t m_HeadIndex;

  /// @brief Field m_CurrentVersion, offset 0x54, size 0x4
  __declspec(property(get = __get_m_CurrentVersion, put = __set_m_CurrentVersion)) uint32_t m_CurrentVersion;

  /// @brief Field m_UpdateMask, offset 0x58, size 0x8
  __declspec(property(get = __get_m_UpdateMask, put = __set_m_UpdateMask))::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType> m_UpdateMask;

  /// @brief Field m_AddNewControls, offset 0x60, size 0x1
  __declspec(property(get = __get_m_AddNewControls, put = __set_m_AddNewControls)) bool m_AddNewControls;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_version)) uint32_t version;

  __declspec(property(get = get_historyDepth, put = set_historyDepth)) int32_t historyDepth;

  __declspec(property(get = get_extraMemoryPerRecord, put = set_extraMemoryPerRecord)) int32_t extraMemoryPerRecord;

  __declspec(property(get = get_updateMask, put = set_updateMask))::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask;

  __declspec(property(get = get_controls))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> controls;

  __declspec(property(get = get_Item, put = set_Item))::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record Item[];

  __declspec(property(get = get_onRecordAdded, put = set_onRecordAdded))::System::Action_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record>* onRecordAdded;

  __declspec(property(
      get = get_onShouldRecordStateChange,
      put = set_onShouldRecordStateChange))::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* onShouldRecordStateChange;

  __declspec(property(get = get_bytesPerRecord)) int32_t bytesPerRecord;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record>*& __get__onRecordAdded_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record>*> const& __get__onRecordAdded_k__BackingField() const;

  constexpr void __set__onRecordAdded_k__BackingField(::System::Action_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record>* value);

  constexpr ::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>*& __get__onShouldRecordStateChange_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>*> const&
  __get__onShouldRecordStateChange_k__BackingField() const;

  constexpr void
  __set__onShouldRecordStateChange_k__BackingField(::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* value);

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>& __get_m_Controls();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> const& __get_m_Controls() const;

  constexpr void __set_m_Controls(::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> value);

  constexpr int32_t& __get_m_ControlCount();

  constexpr int32_t const& __get_m_ControlCount() const;

  constexpr void __set_m_ControlCount(int32_t value);

  constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __get_m_RecordBuffer();

  constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __get_m_RecordBuffer() const;

  constexpr void __set_m_RecordBuffer(::Unity::Collections::NativeArray_1<uint8_t> value);

  constexpr int32_t& __get_m_StateSizeInBytes();

  constexpr int32_t const& __get_m_StateSizeInBytes() const;

  constexpr void __set_m_StateSizeInBytes(int32_t value);

  constexpr int32_t& __get_m_RecordCount();

  constexpr int32_t const& __get_m_RecordCount() const;

  constexpr void __set_m_RecordCount(int32_t value);

  constexpr int32_t& __get_m_HistoryDepth();

  constexpr int32_t const& __get_m_HistoryDepth() const;

  constexpr void __set_m_HistoryDepth(int32_t value);

  constexpr int32_t& __get_m_ExtraMemoryPerRecord();

  constexpr int32_t const& __get_m_ExtraMemoryPerRecord() const;

  constexpr void __set_m_ExtraMemoryPerRecord(int32_t value);

  constexpr int32_t& __get_m_HeadIndex();

  constexpr int32_t const& __get_m_HeadIndex() const;

  constexpr void __set_m_HeadIndex(int32_t value);

  constexpr uint32_t& __get_m_CurrentVersion();

  constexpr uint32_t const& __get_m_CurrentVersion() const;

  constexpr void __set_m_CurrentVersion(uint32_t value);

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>& __get_m_UpdateMask();

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType> const& __get_m_UpdateMask() const;

  constexpr void __set_m_UpdateMask(::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType> value);

  constexpr bool& __get_m_AddNewControls();

  constexpr bool const& __get_m_AddNewControls() const;

  constexpr void __set_m_AddNewControls(bool value);

  /// @brief Method get_Count addr 0x2af653c size 0x8 virtual true final true
  inline int32_t get_Count();

  /// @brief Method get_version addr 0x2af6544 size 0x8 virtual false final false
  inline uint32_t get_version();

  /// @brief Method get_historyDepth addr 0x2af654c size 0x8 virtual false final false
  inline int32_t get_historyDepth();

  /// @brief Method set_historyDepth addr 0x2af6554 size 0xe4 virtual false final false
  inline void set_historyDepth(int32_t value);

  /// @brief Method get_extraMemoryPerRecord addr 0x2af6638 size 0x8 virtual false final false
  inline int32_t get_extraMemoryPerRecord();

  /// @brief Method set_extraMemoryPerRecord addr 0x2af6640 size 0xe4 virtual false final false
  inline void set_extraMemoryPerRecord(int32_t value);

  /// @brief Method get_updateMask addr 0x2af6724 size 0x94 virtual false final false
  inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_updateMask();

  /// @brief Method set_updateMask addr 0x2af67b8 size 0xcc virtual false final false
  inline void set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType value);

  /// @brief Method get_controls addr 0x2af6884 size 0x68 virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> get_controls();

  /// @brief Method get_Item addr 0x2af68ec size 0x114 virtual false final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record get_Item(int32_t index);

  /// @brief Method set_Item addr 0x2af6b38 size 0x138 virtual false final false
  inline void set_Item(int32_t index, ::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record value);

  /// @brief Method get_onRecordAdded addr 0x2af6ff0 size 0x8 virtual false final false
  inline ::System::Action_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record>* get_onRecordAdded();

  /// @brief Method set_onRecordAdded addr 0x2af6ff8 size 0x8 virtual false final false
  inline void set_onRecordAdded(::System::Action_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record>* value);

  /// @brief Method get_onShouldRecordStateChange addr 0x2af7000 size 0x8 virtual false final false
  inline ::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* get_onShouldRecordStateChange();

  /// @brief Method set_onShouldRecordStateChange addr 0x2af7008 size 0x8 virtual false final false
  inline void set_onShouldRecordStateChange(::System::Func_4<::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* value);

  static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* New_ctor(int32_t maxStateSizeInBytes);

  /// @brief Method .ctor addr 0x2af7010 size 0xb4 virtual false final false
  inline void _ctor(int32_t maxStateSizeInBytes);

  static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* New_ctor(::StringW path);

  /// @brief Method .ctor addr 0x2af70c4 size 0x158 virtual false final false
  inline void _ctor(::StringW path);

  static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* New_ctor(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method .ctor addr 0x2af721c size 0xfc virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::InputControl* control);

  static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* controls);

  /// @brief Method .ctor addr 0x2af7318 size 0x7c virtual false final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* controls);

  /// @brief Method Finalize addr 0x2af7394 size 0x94 virtual true final false
  inline void Finalize();

  /// @brief Method Clear addr 0x2af7490 size 0x14 virtual false final false
  inline void Clear();

  /// @brief Method AddRecord addr 0x2af74a4 size 0x6c virtual false final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record AddRecord(::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record record);

  /// @brief Method StartRecording addr 0x2af7630 size 0x15c virtual false final false
  inline void StartRecording();

  /// @brief Method StopRecording addr 0x2af778c size 0x158 virtual false final false
  inline void StopRecording();

  /// @brief Method RecordStateChange addr 0x2af78e4 size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record RecordStateChange(::UnityEngine::InputSystem::InputControl* control,
                                                                                             ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method RecordStateChange addr 0x2af7a7c size 0x290 virtual false final false
  inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record RecordStateChange(::UnityEngine::InputSystem::InputControl* control, ::cordl_internals::Ptr<void> statePtr, double_t time);

  /// @brief Method GetEnumerator addr 0x2af7d1c size 0x60 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2af7d8c size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Dispose addr 0x2af7428 size 0x68 virtual true final true
  inline void Dispose();

  /// @brief Method Destroy addr 0x2af7d90 size 0x78 virtual false final false
  inline void Destroy();

  /// @brief Method Allocate addr 0x2af7e08 size 0x254 virtual false final false
  inline void Allocate();

  /// @brief Method RecordIndexToUserIndex addr 0x2af80ac size 0x24 virtual false final false
  inline int32_t RecordIndexToUserIndex(int32_t index);

  /// @brief Method UserIndexToRecordIndex addr 0x2af6a00 size 0x18 virtual false final false
  inline int32_t UserIndexToRecordIndex(int32_t index);

  /// @brief Method GetRecord addr 0x2af6a18 size 0xf8 virtual false final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader> GetRecord(int32_t index);

  /// @brief Method GetRecordUnchecked addr 0x2af80d0 size 0xac virtual false final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader> GetRecordUnchecked(int32_t index);

  /// @brief Method AllocateRecord addr 0x2af7510 size 0x120 virtual false final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader> AllocateRecord(ByRef<int32_t> index);

  /// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TValue> inline TValue ReadValue(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader> data);

  /// @brief Method ReadValueAsObject addr 0x2af817c size 0xd8 virtual false final false
  inline ::System::Object* ReadValueAsObject(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader> data);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged addr 0x2af8254 size 0xd8 virtual true final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, double_t time,
                                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired addr 0x2af832c size 0x4 virtual true final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, double_t time, int64_t monitorIndex, int32_t timerIndex);

  /// @brief Method get_bytesPerRecord addr 0x2af805c size 0x50 virtual false final false
  inline int32_t get_bytesPerRecord();

  // Ctor Parameters [CppParam { name: "", ty: "InputStateHistory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputStateHistory(InputStateHistory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputStateHistory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputStateHistory(InputStateHistory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputStateHistory();

public:
  /// @brief Field <onRecordAdded>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record>* ____onRecordAdded_k__BackingField;

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

  /// @brief Field kDefaultHistorySize offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultHistorySize{ static_cast<int32_t>(0x80) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputStateHistory, 0x68>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputStateHistory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputStateHistory*, "UnityEngine.InputSystem.LowLevel", "InputStateHistory");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel",
                       "InputStateHistory/RecordHeader/<m_StateWithControlIndex>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel",
                       "InputStateHistory/RecordHeader/<m_StateWithoutControlIndex>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Enumerator, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/Record");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/RecordHeader");
