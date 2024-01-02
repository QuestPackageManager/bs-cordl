#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockMultiplayerStatusModel)
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class IMultiplayerStatusModel;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MockMultiplayerStatusModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockMultiplayerStatusModel);
// Type: ::MockMultiplayerStatusModel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5178))
// CS Name: ::MockMultiplayerStatusModel*
class CORDL_TYPE MockMultiplayerStatusModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _multiplayerStatusData, offset 0x10, size 0x8
  __declspec(property(get = __get__multiplayerStatusData, put = __set__multiplayerStatusData))::GlobalNamespace::MultiplayerStatusData* _multiplayerStatusData;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerStatusModel"
  constexpr operator ::GlobalNamespace::IMultiplayerStatusModel*() noexcept;

  constexpr ::GlobalNamespace::MultiplayerStatusData*& __get__multiplayerStatusData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerStatusData*> const& __get__multiplayerStatusData() const;

  constexpr void __set__multiplayerStatusData(::GlobalNamespace::MultiplayerStatusData* value);

  /// @brief Method GetMultiplayerStatusAsync, addr 0x23df8fc, size 0x70, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* GetMultiplayerStatusAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::MockMultiplayerStatusModel* New_ctor();

  /// @brief Method .ctor, addr 0x23df96c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MockMultiplayerStatusModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockMultiplayerStatusModel(MockMultiplayerStatusModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockMultiplayerStatusModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockMultiplayerStatusModel(MockMultiplayerStatusModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockMultiplayerStatusModel();

public:
  /// @brief Field _multiplayerStatusData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerStatusData* ____multiplayerStatusData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockMultiplayerStatusModel, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockMultiplayerStatusModel, ____multiplayerStatusData) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockMultiplayerStatusModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockMultiplayerStatusModel*, "", "MockMultiplayerStatusModel");
