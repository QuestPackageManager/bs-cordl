#pragma once
// IWYU pragma private; include "GlobalNamespace/AppIdentificationSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AppIdentificationSO)
namespace GlobalNamespace {
class IAppIdentification;
}
// Forward declare root types
namespace GlobalNamespace {
class AppIdentificationSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AppIdentificationSO);
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: AppIdentificationSO
class CORDL_TYPE AppIdentificationSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _appId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__appId, put = __cordl_internal_set__appId)) uint64_t _appId;

  /// @brief Field _graphAppId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__graphAppId, put = __cordl_internal_set__graphAppId)) uint64_t _graphAppId;

  __declspec(property(get = get_appId)) uint64_t appId;

  __declspec(property(get = get_graphAppId)) uint64_t graphAppId;

  /// @brief Convert operator to "::GlobalNamespace::IAppIdentification"
  constexpr operator ::GlobalNamespace::IAppIdentification*() noexcept;

  static inline ::GlobalNamespace::AppIdentificationSO* New_ctor();

  constexpr uint64_t const& __cordl_internal_get__appId() const;

  constexpr uint64_t& __cordl_internal_get__appId();

  constexpr uint64_t const& __cordl_internal_get__graphAppId() const;

  constexpr uint64_t& __cordl_internal_get__graphAppId();

  constexpr void __cordl_internal_set__appId(uint64_t value);

  constexpr void __cordl_internal_set__graphAppId(uint64_t value);

  /// @brief Method .ctor, addr 0x3608224, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_appId, addr 0x3608214, size 0x8, virtual true, abstract: false, final true
  inline uint64_t get_appId();

  /// @brief Method get_graphAppId, addr 0x360821c, size 0x8, virtual true, abstract: false, final true
  inline uint64_t get_graphAppId();

  /// @brief Convert to "::GlobalNamespace::IAppIdentification"
  constexpr ::GlobalNamespace::IAppIdentification* i___GlobalNamespace__IAppIdentification() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppIdentificationSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppIdentificationSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppIdentificationSO(AppIdentificationSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppIdentificationSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppIdentificationSO(AppIdentificationSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14767 };

  /// @brief Field _appId, offset: 0x18, size: 0x8, def value: None
  uint64_t ____appId;

  /// @brief Field _graphAppId, offset: 0x20, size: 0x8, def value: None
  uint64_t ____graphAppId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AppIdentificationSO, ____appId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppIdentificationSO, ____graphAppId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppIdentificationSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AppIdentificationSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppIdentificationSO*, "", "AppIdentificationSO");
