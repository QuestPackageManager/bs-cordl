#pragma once
// IWYU pragma private; include "GlobalNamespace/MockMultiplayerStatusModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IMultiplayerStatusModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockMultiplayerStatusModel)
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class MockMultiplayerStatusModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockMultiplayerStatusModel);
// Dependencies IMultiplayerStatusModel, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockMultiplayerStatusModel
class CORDL_TYPE MockMultiplayerStatusModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _multiplayerStatusData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerStatusData, put = __cordl_internal_set__multiplayerStatusData)) ::GlobalNamespace::MultiplayerStatusData* _multiplayerStatusData;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerStatusModel"
  constexpr operator ::GlobalNamespace::IMultiplayerStatusModel*() noexcept;

  /// @brief Method GetMultiplayerStatusAsync, addr 0x3bc9934, size 0x70, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* GetMultiplayerStatusAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::MockMultiplayerStatusModel* New_ctor();

  constexpr ::GlobalNamespace::MultiplayerStatusData* const& __cordl_internal_get__multiplayerStatusData() const;

  constexpr ::GlobalNamespace::MultiplayerStatusData*& __cordl_internal_get__multiplayerStatusData();

  constexpr void __cordl_internal_set__multiplayerStatusData(::GlobalNamespace::MultiplayerStatusData* value);

  /// @brief Method .ctor, addr 0x3bc99a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IMultiplayerStatusModel"
  constexpr ::GlobalNamespace::IMultiplayerStatusModel* i___GlobalNamespace__IMultiplayerStatusModel() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockMultiplayerStatusModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockMultiplayerStatusModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockMultiplayerStatusModel(MockMultiplayerStatusModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockMultiplayerStatusModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockMultiplayerStatusModel(MockMultiplayerStatusModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4540 };

  /// @brief Field _multiplayerStatusData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerStatusData* ____multiplayerStatusData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockMultiplayerStatusModel, ____multiplayerStatusData) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockMultiplayerStatusModel, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockMultiplayerStatusModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockMultiplayerStatusModel*, "", "MockMultiplayerStatusModel");
