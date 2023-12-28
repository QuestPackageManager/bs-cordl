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
class Action;
}
namespace System {
template <typename T> class Action_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4084))
// CS Name: ::SongTimeFixedUpdateController*
class CORDL_TYPE SongTimeFixedUpdateController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSource, offset 0x18, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field songControllerFixedTimeDidUpdateEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_songControllerFixedTimeDidUpdateEvent, put = __set_songControllerFixedTimeDidUpdateEvent))::System::Action_1<float_t>* songControllerFixedTimeDidUpdateEvent;

  /// @brief Field songControllerTimeDidUpdateEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_songControllerTimeDidUpdateEvent, put = __set_songControllerTimeDidUpdateEvent))::System::Action* songControllerTimeDidUpdateEvent;

  /// @brief Field _accumulator, offset 0x30, size 0x4
  __declspec(property(get = __get__accumulator, put = __set__accumulator)) float_t _accumulator;

  /// @brief Field _interpolationFactor, offset 0x34, size 0x4
  __declspec(property(get = __get__interpolationFactor, put = __set__interpolationFactor)) float_t _interpolationFactor;

  __declspec(property(get = get_fixedDeltaTime)) float_t fixedDeltaTime;

  __declspec(property(get = get_interpolationFactor)) float_t interpolationFactor;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::System::Action_1<float_t>*& __get_songControllerFixedTimeDidUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __get_songControllerFixedTimeDidUpdateEvent() const;

  constexpr void __set_songControllerFixedTimeDidUpdateEvent(::System::Action_1<float_t>* value);

  constexpr ::System::Action*& __get_songControllerTimeDidUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_songControllerTimeDidUpdateEvent() const;

  constexpr void __set_songControllerTimeDidUpdateEvent(::System::Action* value);

  constexpr float_t& __get__accumulator();

  constexpr float_t const& __get__accumulator() const;

  constexpr void __set__accumulator(float_t value);

  constexpr float_t& __get__interpolationFactor();

  constexpr float_t const& __get__interpolationFactor() const;

  constexpr void __set__interpolationFactor(float_t value);

  /// @brief Method add_songControllerFixedTimeDidUpdateEvent addr 0x22316d0 size 0xb0 virtual false final false
  inline void add_songControllerFixedTimeDidUpdateEvent(::System::Action_1<float_t>* value);

  /// @brief Method remove_songControllerFixedTimeDidUpdateEvent addr 0x2231780 size 0xb0 virtual false final false
  inline void remove_songControllerFixedTimeDidUpdateEvent(::System::Action_1<float_t>* value);

  /// @brief Method add_songControllerTimeDidUpdateEvent addr 0x2231830 size 0x9c virtual false final false
  inline void add_songControllerTimeDidUpdateEvent(::System::Action* value);

  /// @brief Method remove_songControllerTimeDidUpdateEvent addr 0x22318cc size 0x9c virtual false final false
  inline void remove_songControllerTimeDidUpdateEvent(::System::Action* value);

  /// @brief Method get_fixedDeltaTime addr 0x2231968 size 0xc virtual false final false
  inline float_t get_fixedDeltaTime();

  /// @brief Method get_interpolationFactor addr 0x2231974 size 0x8 virtual false final false
  inline float_t get_interpolationFactor();

  /// @brief Method Update addr 0x223197c size 0x140 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::SongTimeFixedUpdateController* New_ctor();

  /// @brief Method .ctor addr 0x2231abc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SongTimeFixedUpdateController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongTimeFixedUpdateController(SongTimeFixedUpdateController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongTimeFixedUpdateController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongTimeFixedUpdateController(SongTimeFixedUpdateController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongTimeFixedUpdateController();

public:
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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongTimeFixedUpdateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongTimeFixedUpdateController*, "", "SongTimeFixedUpdateController");
