#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingUIController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RecordingUIController)
namespace GlobalNamespace {
class __RecordingUIController__InitData;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingUIController;
}
namespace GlobalNamespace {
class __RecordingUIController__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingUIController);
MARK_REF_PTR_T(::GlobalNamespace::__RecordingUIController__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RecordingUIController::InitData*
class CORDL_TYPE __RecordingUIController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field recordingEnabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_recordingEnabled, put = __cordl_internal_set_recordingEnabled)) bool recordingEnabled;

  static inline ::GlobalNamespace::__RecordingUIController__InitData* New_ctor(bool recordingEnabled);

  constexpr bool const& __cordl_internal_get_recordingEnabled() const;

  constexpr bool& __cordl_internal_get_recordingEnabled();

  constexpr void __cordl_internal_set_recordingEnabled(bool value);

  /// @brief Method .ctor, addr 0x3b43864, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool recordingEnabled);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordingUIController__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RecordingUIController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RecordingUIController__InitData(__RecordingUIController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingUIController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RecordingUIController__InitData(__RecordingUIController__InitData const&) = delete;

  /// @brief Field recordingEnabled, offset: 0x10, size: 0x1, def value: None
  bool ___recordingEnabled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4400 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingUIController__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingUIController__InitData, ___recordingEnabled) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RecordingUIController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RecordingUIController*
class CORDL_TYPE RecordingUIController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__RecordingUIController__InitData;

  /// @brief Field _circle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__circle, put = __cordl_internal_set__circle)) ::UnityW<::UnityEngine::GameObject> _circle;

  /// @brief Field _initData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::__RecordingUIController__InitData* _initData;

  /// @brief Field _lastUpdateTime, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__lastUpdateTime, put = __cordl_internal_set__lastUpdateTime)) float_t _lastUpdateTime;

  /// @brief Field _updateTimeSpan, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__updateTimeSpan, put = __cordl_internal_set__updateTimeSpan)) float_t _updateTimeSpan;

  /// @brief Method Init, addr 0x3b43768, size 0x80, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::RecordingUIController* New_ctor();

  /// @brief Method Update, addr 0x3b437e8, size 0x6c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__circle() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__circle();

  constexpr ::GlobalNamespace::__RecordingUIController__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RecordingUIController__InitData*> const& __cordl_internal_get__initData() const;

  constexpr float_t const& __cordl_internal_get__lastUpdateTime() const;

  constexpr float_t& __cordl_internal_get__lastUpdateTime();

  constexpr float_t const& __cordl_internal_get__updateTimeSpan() const;

  constexpr float_t& __cordl_internal_get__updateTimeSpan();

  constexpr void __cordl_internal_set__circle(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__RecordingUIController__InitData* value);

  constexpr void __cordl_internal_set__lastUpdateTime(float_t value);

  constexpr void __cordl_internal_set__updateTimeSpan(float_t value);

  /// @brief Method .ctor, addr 0x3b43854, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingUIController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingUIController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingUIController(RecordingUIController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingUIController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingUIController(RecordingUIController const&) = delete;

  /// @brief Field _circle, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____circle;

  /// @brief Field _updateTimeSpan, offset: 0x28, size: 0x4, def value: None
  float_t ____updateTimeSpan;

  /// @brief Field _initData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__RecordingUIController__InitData* ____initData;

  /// @brief Field _lastUpdateTime, offset: 0x38, size: 0x4, def value: None
  float_t ____lastUpdateTime;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4401 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingUIController, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingUIController, ____circle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingUIController, ____updateTimeSpan) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingUIController, ____initData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingUIController, ____lastUpdateTime) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingUIController*, "", "RecordingUIController");
NEED_NO_BOX(::GlobalNamespace::__RecordingUIController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingUIController__InitData*, "", "RecordingUIController/InitData");
