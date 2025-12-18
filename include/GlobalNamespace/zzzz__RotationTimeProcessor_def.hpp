#pragma once
// IWYU pragma private; include "GlobalNamespace/RotationTimeProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RotationTimeProcessor)
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class EventData;
}
namespace BeatmapSaveDataVersion3 {
class RotationEventData;
}
namespace GlobalNamespace {
struct RotationTimeProcessor_RotationChangeData;
}
namespace GlobalNamespace {
class RotationTimeProcessor___c;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class RotationTimeProcessor;
}
namespace GlobalNamespace {
class RotationTimeProcessor___c;
}
namespace GlobalNamespace {
struct RotationTimeProcessor_RotationChangeData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RotationTimeProcessor);
MARK_REF_PTR_T(::GlobalNamespace::RotationTimeProcessor___c);
MARK_VAL_T(::GlobalNamespace::RotationTimeProcessor_RotationChangeData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: RotationTimeProcessor/RotationChangeData
struct CORDL_TYPE RotationTimeProcessor_RotationChangeData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3617120, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, int32_t rotation);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RotationTimeProcessor_RotationChangeData();

  // Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RotationTimeProcessor_RotationChangeData(float_t beat, int32_t rotation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14872 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field beat, offset: 0x0, size: 0x4, def value: None
  float_t beat;

  /// @brief Field rotation, offset: 0x4, size: 0x4, def value: None
  int32_t rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotationTimeProcessor_RotationChangeData, beat) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationTimeProcessor_RotationChangeData, rotation) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RotationTimeProcessor_RotationChangeData, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RotationTimeProcessor/<>c
class CORDL_TYPE RotationTimeProcessor___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::RotationTimeProcessor___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* __9__3_0;

  static inline ::GlobalNamespace::RotationTimeProcessor___c* New_ctor();

  /// @brief Method <.ctor>b__3_0, addr 0x36176d0, size 0x20, virtual false, abstract: false, final false
  inline bool __ctor_b__3_0(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData* e);

  /// @brief Method .ctor, addr 0x36176cc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::RotationTimeProcessor___c* getStaticF___9();

  static inline ::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::RotationTimeProcessor___c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RotationTimeProcessor___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RotationTimeProcessor___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RotationTimeProcessor___c(RotationTimeProcessor___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RotationTimeProcessor___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RotationTimeProcessor___c(RotationTimeProcessor___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14873 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RotationTimeProcessor___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RotationTimeProcessor
class CORDL_TYPE RotationTimeProcessor : public ::System::Object {
public:
  // Declarations
  using RotationChangeData = ::GlobalNamespace::RotationTimeProcessor_RotationChangeData;

  using __c = ::GlobalNamespace::RotationTimeProcessor___c;

  /// @brief Field _rotationChangeDataList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationChangeDataList,
                      put = __cordl_internal_set__rotationChangeDataList)) ::System::Collections::Generic::List_1<::GlobalNamespace::RotationTimeProcessor_RotationChangeData>* _rotationChangeDataList;

  /// @brief Field _spawnRotations, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__spawnRotations, put = setStaticF__spawnRotations)) ::ArrayW<int32_t, ::Array<int32_t>*> _spawnRotations;

  /// @brief Field currentBpmChangesDataIdx, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_currentBpmChangesDataIdx, put = __cordl_internal_set_currentBpmChangesDataIdx)) int32_t currentBpmChangesDataIdx;

  /// @brief Method ConvertBeatToRotation, addr 0x3616b20, size 0x104, virtual false, abstract: false, final false
  inline int32_t ConvertBeatToRotation(float_t beat);

  static inline ::GlobalNamespace::RotationTimeProcessor* New_ctor(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events);

  static inline ::GlobalNamespace::RotationTimeProcessor* New_ctor(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::RotationEventData*>* rotationEventsSaveData);

  /// @brief Method Reset, addr 0x36175d8, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SpawnRotationForEventValue, addr 0x361706c, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t SpawnRotationForEventValue(int32_t index);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotationTimeProcessor_RotationChangeData>* const& __cordl_internal_get__rotationChangeDataList() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotationTimeProcessor_RotationChangeData>*& __cordl_internal_get__rotationChangeDataList();

  constexpr int32_t const& __cordl_internal_get_currentBpmChangesDataIdx() const;

  constexpr int32_t& __cordl_internal_get_currentBpmChangesDataIdx();

  constexpr void __cordl_internal_set__rotationChangeDataList(::System::Collections::Generic::List_1<::GlobalNamespace::RotationTimeProcessor_RotationChangeData>* value);

  constexpr void __cordl_internal_set_currentBpmChangesDataIdx(int32_t value);

  /// @brief Method .ctor, addr 0x3616cd4, size 0x398, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events);

  /// @brief Method .ctor, addr 0x361712c, size 0x4ac, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::RotationEventData*>* rotationEventsSaveData);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF__spawnRotations();

  static inline void setStaticF__spawnRotations(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RotationTimeProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RotationTimeProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RotationTimeProcessor(RotationTimeProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RotationTimeProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RotationTimeProcessor(RotationTimeProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14874 };

  /// @brief Field _rotationChangeDataList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::RotationTimeProcessor_RotationChangeData>* ____rotationChangeDataList;

  /// @brief Field currentBpmChangesDataIdx, offset: 0x18, size: 0x4, def value: None
  int32_t ___currentBpmChangesDataIdx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotationTimeProcessor, ____rotationChangeDataList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationTimeProcessor, ___currentBpmChangesDataIdx) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RotationTimeProcessor, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RotationTimeProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RotationTimeProcessor*, "", "RotationTimeProcessor");
NEED_NO_BOX(::GlobalNamespace::RotationTimeProcessor___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RotationTimeProcessor___c*, "", "RotationTimeProcessor/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RotationTimeProcessor_RotationChangeData, "", "RotationTimeProcessor/RotationChangeData");
