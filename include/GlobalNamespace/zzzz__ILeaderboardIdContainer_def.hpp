#pragma once
// IWYU pragma private; include "GlobalNamespace/ILeaderboardIdContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILeaderboardIdContainer)
namespace GlobalNamespace {
class ILeaderboardIdData;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ILeaderboardIdContainer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILeaderboardIdContainer);
// Type: ::ILeaderboardIdContainer
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ILeaderboardIdContainer*
class CORDL_TYPE ILeaderboardIdContainer {
public:
  // Declarations
  __declspec(property(get = get_leaderboardIds)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* leaderboardIds;

  /// @brief Method get_leaderboardIds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* get_leaderboardIds();

  // Ctor Parameters [CppParam { name: "", ty: "ILeaderboardIdContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILeaderboardIdContainer(ILeaderboardIdContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILeaderboardIdContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILeaderboardIdContainer(ILeaderboardIdContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12943 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILeaderboardIdContainer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILeaderboardIdContainer*, "", "ILeaderboardIdContainer");
