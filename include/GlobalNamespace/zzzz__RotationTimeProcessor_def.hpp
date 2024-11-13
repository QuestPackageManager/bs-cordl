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
struct __RotationTimeProcessor__RotationChangeData;
}
namespace GlobalNamespace {
class __RotationTimeProcessor____c;
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
class __RotationTimeProcessor____c;
}
namespace GlobalNamespace {
struct __RotationTimeProcessor__RotationChangeData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RotationTimeProcessor);
MARK_REF_PTR_T(::GlobalNamespace::__RotationTimeProcessor____c);
MARK_VAL_T(::GlobalNamespace::__RotationTimeProcessor__RotationChangeData);
// Type: ::RotationChangeData
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RotationTimeProcessor::RotationChangeData
struct CORDL_TYPE __RotationTimeProcessor__RotationChangeData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2683e04, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, int32_t rotation);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RotationTimeProcessor__RotationChangeData();

  // Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RotationTimeProcessor__RotationChangeData(float_t beat, int32_t rotation) noexcept;

  /// @brief Field beat, offset: 0x0, size: 0x4, def value: None
  float_t beat;

  /// @brief Field rotation, offset: 0x4, size: 0x4, def value: None
  int32_t rotation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12856 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RotationTimeProcessor__RotationChangeData, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RotationTimeProcessor__RotationChangeData, beat) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RotationTimeProcessor__RotationChangeData, rotation) == 0x4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RotationTimeProcessor::<>c*
class CORDL_TYPE __RotationTimeProcessor____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__RotationTimeProcessor____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* __9__3_0;

  static inline ::GlobalNamespace::__RotationTimeProcessor____c* New_ctor();

  /// @brief Method <.ctor>b__3_0, addr 0x268431c, size 0x24, virtual false, abstract: false, final false
  inline bool __ctor_b__3_0(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData* e);

  /// @brief Method .ctor, addr 0x2684314, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__RotationTimeProcessor____c* getStaticF___9();

  static inline ::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::__RotationTimeProcessor____c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RotationTimeProcessor____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RotationTimeProcessor____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RotationTimeProcessor____c(__RotationTimeProcessor____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RotationTimeProcessor____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RotationTimeProcessor____c(__RotationTimeProcessor____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12857 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RotationTimeProcessor____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RotationTimeProcessor
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RotationTimeProcessor*
class CORDL_TYPE RotationTimeProcessor : public ::System::Object {
public:
  // Declarations
  using RotationChangeData = ::GlobalNamespace::__RotationTimeProcessor__RotationChangeData;

  using __c = ::GlobalNamespace::__RotationTimeProcessor____c;

  /// @brief Field _rotationChangeDataList, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__rotationChangeDataList,
      put = __cordl_internal_set__rotationChangeDataList)) ::System::Collections::Generic::List_1<::GlobalNamespace::__RotationTimeProcessor__RotationChangeData>* _rotationChangeDataList;

  /// @brief Field currentBpmChangesDataIdx, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_currentBpmChangesDataIdx, put = __cordl_internal_set_currentBpmChangesDataIdx)) int32_t currentBpmChangesDataIdx;

  /// @brief Method ConvertBeatToRotation, addr 0x2683938, size 0xfc, virtual false, abstract: false, final false
  inline int32_t ConvertBeatToRotation(float_t beat);

  static inline ::GlobalNamespace::RotationTimeProcessor* New_ctor(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events);

  static inline ::GlobalNamespace::RotationTimeProcessor* New_ctor(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::RotationEventData*>* rotationEventsSaveData);

  /// @brief Method Reset, addr 0x26842b0, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__RotationTimeProcessor__RotationChangeData>*& __cordl_internal_get__rotationChangeDataList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__RotationTimeProcessor__RotationChangeData>*> const&
  __cordl_internal_get__rotationChangeDataList() const;

  constexpr int32_t const& __cordl_internal_get_currentBpmChangesDataIdx() const;

  constexpr int32_t& __cordl_internal_get_currentBpmChangesDataIdx();

  constexpr void __cordl_internal_set__rotationChangeDataList(::System::Collections::Generic::List_1<::GlobalNamespace::__RotationTimeProcessor__RotationChangeData>* value);

  constexpr void __cordl_internal_set_currentBpmChangesDataIdx(int32_t value);

  /// @brief Method .ctor, addr 0x2683ae0, size 0x324, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events);

  /// @brief Method .ctor, addr 0x2683e10, size 0x4a0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::RotationEventData*>* rotationEventsSaveData);

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

  /// @brief Field _rotationChangeDataList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__RotationTimeProcessor__RotationChangeData>* ____rotationChangeDataList;

  /// @brief Field currentBpmChangesDataIdx, offset: 0x18, size: 0x4, def value: None
  int32_t ___currentBpmChangesDataIdx;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12858 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RotationTimeProcessor, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationTimeProcessor, ____rotationChangeDataList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationTimeProcessor, ___currentBpmChangesDataIdx) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RotationTimeProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RotationTimeProcessor*, "", "RotationTimeProcessor");
NEED_NO_BOX(::GlobalNamespace::__RotationTimeProcessor____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RotationTimeProcessor____c*, "", "RotationTimeProcessor/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RotationTimeProcessor__RotationChangeData, "", "RotationTimeProcessor/RotationChangeData");
