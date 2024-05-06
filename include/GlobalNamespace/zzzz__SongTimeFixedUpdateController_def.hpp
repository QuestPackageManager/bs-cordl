#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SongTimeFixedUpdateController)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class SongTimeFixedUpdateController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongTimeFixedUpdateController);
// Type: ::SongTimeFixedUpdateController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongTimeFixedUpdateController*
class CORDL_TYPE SongTimeFixedUpdateController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _accumulator, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__accumulator, put = __cordl_internal_set__accumulator)) float_t _accumulator;

  /// @brief Field _audioTimeSource, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _interpolationFactor, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__interpolationFactor, put = __cordl_internal_set__interpolationFactor)) float_t _interpolationFactor;

  __declspec(property(get = get_fixedDeltaTime)) float_t fixedDeltaTime;

  __declspec(property(get = get_interpolationFactor)) float_t interpolationFactor;

  /// @brief Field songControllerFixedTimeDidUpdateEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_songControllerFixedTimeDidUpdateEvent,
                      put = __cordl_internal_set_songControllerFixedTimeDidUpdateEvent))::System::Action_1<float_t>* songControllerFixedTimeDidUpdateEvent;

  /// @brief Field songControllerTimeDidUpdateEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_songControllerTimeDidUpdateEvent, put = __cordl_internal_set_songControllerTimeDidUpdateEvent))::System::Action* songControllerTimeDidUpdateEvent;

  static inline ::GlobalNamespace::SongTimeFixedUpdateController* New_ctor();

  /// @brief Method Update, addr 0x260be98, size 0x140, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get__accumulator() const;

  constexpr float_t& __cordl_internal_get__accumulator();

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __cordl_internal_get__audioTimeSource() const;

  constexpr float_t const& __cordl_internal_get__interpolationFactor() const;

  constexpr float_t& __cordl_internal_get__interpolationFactor();

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_songControllerFixedTimeDidUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __cordl_internal_get_songControllerFixedTimeDidUpdateEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_songControllerTimeDidUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_songControllerTimeDidUpdateEvent() const;

  constexpr void __cordl_internal_set__accumulator(float_t value);

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__interpolationFactor(float_t value);

  constexpr void __cordl_internal_set_songControllerFixedTimeDidUpdateEvent(::System::Action_1<float_t>* value);

  constexpr void __cordl_internal_set_songControllerTimeDidUpdateEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x260bfd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_songControllerFixedTimeDidUpdateEvent, addr 0x260bbec, size 0xb0, virtual false, abstract: false, final false
  inline void add_songControllerFixedTimeDidUpdateEvent(::System::Action_1<float_t>* value);

  /// @brief Method add_songControllerTimeDidUpdateEvent, addr 0x260bd4c, size 0x9c, virtual false, abstract: false, final false
  inline void add_songControllerTimeDidUpdateEvent(::System::Action* value);

  /// @brief Method get_fixedDeltaTime, addr 0x260be84, size 0xc, virtual false, abstract: false, final false
  inline float_t get_fixedDeltaTime();

  /// @brief Method get_interpolationFactor, addr 0x260be90, size 0x8, virtual false, abstract: false, final false
  inline float_t get_interpolationFactor();

  /// @brief Method remove_songControllerFixedTimeDidUpdateEvent, addr 0x260bc9c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_songControllerFixedTimeDidUpdateEvent(::System::Action_1<float_t>* value);

  /// @brief Method remove_songControllerTimeDidUpdateEvent, addr 0x260bde8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_songControllerTimeDidUpdateEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongTimeFixedUpdateController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongTimeFixedUpdateController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongTimeFixedUpdateController(SongTimeFixedUpdateController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongTimeFixedUpdateController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongTimeFixedUpdateController(SongTimeFixedUpdateController const&) = delete;

  /// @brief Field _audioTimeSource, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field songControllerFixedTimeDidUpdateEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___songControllerFixedTimeDidUpdateEvent;

  /// @brief Field songControllerTimeDidUpdateEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___songControllerTimeDidUpdateEvent;

  /// @brief Field _accumulator, offset: 0x30, size: 0x4, def value: None
  float_t ____accumulator;

  /// @brief Field _interpolationFactor, offset: 0x34, size: 0x4, def value: None
  float_t ____interpolationFactor;

  /// @brief Field kFixedDeltaTime offset 0xffffffff size 0x4
  static constexpr float_t kFixedDeltaTime{ 0.016666668 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongTimeFixedUpdateController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeFixedUpdateController, ____audioTimeSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeFixedUpdateController, ___songControllerFixedTimeDidUpdateEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeFixedUpdateController, ___songControllerTimeDidUpdateEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeFixedUpdateController, ____accumulator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongTimeFixedUpdateController, ____interpolationFactor) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongTimeFixedUpdateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongTimeFixedUpdateController*, "", "SongTimeFixedUpdateController");
