#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BloomFogEnvironment)
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
namespace GlobalNamespace {
class BloomFogSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomFogEnvironment;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomFogEnvironment);
// Type: ::BloomFogEnvironment
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14668))
// CS Name: ::BloomFogEnvironment*
class CORDL_TYPE BloomFogEnvironment : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _bloomFog, offset 0x18, size 0x8
  __declspec(property(get = __get__bloomFog, put = __set__bloomFog))::GlobalNamespace::BloomFogSO* _bloomFog;

  /// @brief Field _fogParams, offset 0x20, size 0x8
  __declspec(property(get = __get__fogParams, put = __set__fogParams))::GlobalNamespace::BloomFogEnvironmentParams* _fogParams;

  constexpr ::GlobalNamespace::BloomFogSO*& __get__bloomFog();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogSO*> const& __get__bloomFog() const;

  constexpr void __set__bloomFog(::GlobalNamespace::BloomFogSO* value);

  constexpr ::GlobalNamespace::BloomFogEnvironmentParams*& __get__fogParams();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogEnvironmentParams*> const& __get__fogParams() const;

  constexpr void __set__fogParams(::GlobalNamespace::BloomFogEnvironmentParams* value);

  /// @brief Method OnEnable addr 0x1faced4 size 0x40 virtual false final false
  inline void OnEnable();

  /// @brief Method OnValidate addr 0x1facf34 size 0x48 virtual false final false
  inline void OnValidate();

  static inline ::GlobalNamespace::BloomFogEnvironment* New_ctor();

  /// @brief Method .ctor addr 0x1fad18c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomFogEnvironment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomFogEnvironment(BloomFogEnvironment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomFogEnvironment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomFogEnvironment(BloomFogEnvironment const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomFogEnvironment();

public:
  /// @brief Field _bloomFog, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BloomFogSO* ____bloomFog;

  /// @brief Field _fogParams, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BloomFogEnvironmentParams* ____fogParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFogEnvironment, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogEnvironment, ____bloomFog) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogEnvironment, ____fogParams) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomFogEnvironment);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogEnvironment*, "", "BloomFogEnvironment");
