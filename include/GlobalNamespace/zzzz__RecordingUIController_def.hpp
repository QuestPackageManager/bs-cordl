#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RecordingUIController)
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class __RecordingUIController__InitData;
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5040))
// CS Name: ::RecordingUIController::InitData*
class CORDL_TYPE __RecordingUIController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field recordingEnabled, offset 0x10, size 0x1
  __declspec(property(get = __get_recordingEnabled, put = __set_recordingEnabled)) bool recordingEnabled;

  constexpr bool& __get_recordingEnabled();

  constexpr bool const& __get_recordingEnabled() const;

  constexpr void __set_recordingEnabled(bool value);

  static inline ::GlobalNamespace::__RecordingUIController__InitData* New_ctor(bool recordingEnabled);

  /// @brief Method .ctor, addr 0x23c2334, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool recordingEnabled);

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingUIController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RecordingUIController__InitData(__RecordingUIController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingUIController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RecordingUIController__InitData(__RecordingUIController__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordingUIController__InitData();

public:
  /// @brief Field recordingEnabled, offset: 0x10, size: 0x1, def value: None
  bool ___recordingEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingUIController__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingUIController__InitData, ___recordingEnabled) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RecordingUIController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5041))
// CS Name: ::RecordingUIController*
class CORDL_TYPE RecordingUIController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__RecordingUIController__InitData;

  /// @brief Field _circle, offset 0x18, size 0x8
  __declspec(property(get = __get__circle, put = __set__circle))::UnityEngine::GameObject* _circle;

  /// @brief Field _updateTimeSpan, offset 0x20, size 0x4
  __declspec(property(get = __get__updateTimeSpan, put = __set__updateTimeSpan)) float_t _updateTimeSpan;

  /// @brief Field _initData, offset 0x28, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__RecordingUIController__InitData* _initData;

  /// @brief Field _lastUpdateTime, offset 0x30, size 0x4
  __declspec(property(get = __get__lastUpdateTime, put = __set__lastUpdateTime)) float_t _lastUpdateTime;

  constexpr ::UnityEngine::GameObject*& __get__circle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__circle() const;

  constexpr void __set__circle(::UnityEngine::GameObject* value);

  constexpr float_t& __get__updateTimeSpan();

  constexpr float_t const& __get__updateTimeSpan() const;

  constexpr void __set__updateTimeSpan(float_t value);

  constexpr ::GlobalNamespace::__RecordingUIController__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RecordingUIController__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__RecordingUIController__InitData* value);

  constexpr float_t& __get__lastUpdateTime();

  constexpr float_t const& __get__lastUpdateTime() const;

  constexpr void __set__lastUpdateTime(float_t value);

  /// @brief Method Init, addr 0x23c2238, size 0x80, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method Update, addr 0x23c22b8, size 0x6c, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::RecordingUIController* New_ctor();

  /// @brief Method .ctor, addr 0x23c2324, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RecordingUIController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingUIController(RecordingUIController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingUIController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingUIController(RecordingUIController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingUIController();

public:
  /// @brief Field _circle, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____circle;

  /// @brief Field _updateTimeSpan, offset: 0x20, size: 0x4, def value: None
  float_t ____updateTimeSpan;

  /// @brief Field _initData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__RecordingUIController__InitData* ____initData;

  /// @brief Field _lastUpdateTime, offset: 0x30, size: 0x4, def value: None
  float_t ____lastUpdateTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingUIController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingUIController, ____circle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingUIController, ____updateTimeSpan) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingUIController, ____initData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingUIController, ____lastUpdateTime) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingUIController*, "", "RecordingUIController");
NEED_NO_BOX(::GlobalNamespace::__RecordingUIController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingUIController__InitData*, "", "RecordingUIController/InitData");
