#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightWithIdMonoBehaviour)
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class ILightWithId;
}
// Forward declare root types
namespace GlobalNamespace {
class LightWithIdMonoBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightWithIdMonoBehaviour);
// Type: ::LightWithIdMonoBehaviour
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14542))
// CS Name: ::LightWithIdMonoBehaviour*
class CORDL_TYPE LightWithIdMonoBehaviour : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _ID, offset 0x18, size 0x4
  __declspec(property(get = __get__ID, put = __set__ID)) int32_t _ID;

  /// @brief Field _lightManager, offset 0x20, size 0x8
  __declspec(property(get = __get__lightManager, put = __set__lightManager))::GlobalNamespace::LightWithIdManager* _lightManager;

  /// @brief Field _isRegistered, offset 0x28, size 0x1
  __declspec(property(get = __get__isRegistered, put = __set__isRegistered)) bool _isRegistered;

  __declspec(property(get = get_lightId)) int32_t lightId;

  __declspec(property(get = get_isRegistered)) bool isRegistered;

  /// @brief Convert operator to "::GlobalNamespace::ILightWithId"
  constexpr operator ::GlobalNamespace::ILightWithId*() noexcept;

  constexpr int32_t& __get__ID();

  constexpr int32_t const& __get__ID() const;

  constexpr void __set__ID(int32_t value);

  constexpr ::GlobalNamespace::LightWithIdManager*& __get__lightManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightWithIdManager*> const& __get__lightManager() const;

  constexpr void __set__lightManager(::GlobalNamespace::LightWithIdManager* value);

  constexpr bool& __get__isRegistered();

  constexpr bool const& __get__isRegistered() const;

  constexpr void __set__isRegistered(bool value);

  /// @brief Method get_lightId addr 0x2111000 size 0x8 virtual true final true
  inline int32_t get_lightId();

  /// @brief Method get_isRegistered addr 0x2111008 size 0x8 virtual true final true
  inline bool get_isRegistered();

  /// @brief Method __SetIsRegistered addr 0x2111010 size 0xc virtual true final true
  inline void __SetIsRegistered();

  /// @brief Method __SetIsUnRegistered addr 0x211101c size 0x8 virtual true final true
  inline void __SetIsUnRegistered();

  /// @brief Method ColorWasSet addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ColorWasSet(::UnityEngine::Color color);

  /// @brief Method OnEnable addr 0x2111024 size 0x4 virtual true final false
  inline void OnEnable();

  /// @brief Method Start addr 0x21110ac size 0x4 virtual true final false
  inline void Start();

  /// @brief Method OnDisable addr 0x21110b0 size 0x84 virtual true final false
  inline void OnDisable();

  /// @brief Method RegisterLight addr 0x2111028 size 0x84 virtual false final false
  inline void RegisterLight();

  /// @brief Method SetLightId addr 0x2111134 size 0xa8 virtual false final false
  inline void SetLightId(int32_t newLightId);

  static inline ::GlobalNamespace::LightWithIdMonoBehaviour* New_ctor();

  /// @brief Method .ctor addr 0x210e898 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightWithIdMonoBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightWithIdMonoBehaviour(LightWithIdMonoBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightWithIdMonoBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightWithIdMonoBehaviour(LightWithIdMonoBehaviour const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightWithIdMonoBehaviour();

public:
  /// @brief Field _ID, offset: 0x18, size: 0x4, def value: None
  int32_t ____ID;

  /// @brief Field _lightManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LightWithIdManager* ____lightManager;

  /// @brief Field _isRegistered, offset: 0x28, size: 0x1, def value: None
  bool ____isRegistered;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightWithIdMonoBehaviour, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightWithIdMonoBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightWithIdMonoBehaviour*, "", "LightWithIdMonoBehaviour");
