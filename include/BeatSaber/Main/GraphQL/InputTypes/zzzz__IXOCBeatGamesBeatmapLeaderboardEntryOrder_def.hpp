#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/InputTypes/IXOCBeatGamesBeatmapLeaderboardEntryOrder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXOCBeatGamesBeatmapLeaderboardEntryOrder)
namespace BeatSaber::Main::GraphQL::Enums {
struct XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLInputObject;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace BeatSaber::Main::GraphQL::InputTypes {
class IXOCBeatGamesBeatmapLeaderboardEntryOrder;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder);
// Dependencies
namespace BeatSaber::Main::GraphQL::InputTypes {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.InputTypes.IXOCBeatGamesBeatmapLeaderboardEntryOrder
class CORDL_TYPE IXOCBeatGamesBeatmapLeaderboardEntryOrder {
public:
  // Declarations
  __declspec(property(put = set_By)) ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject By;

  __declspec(property(put = set_Desc)) ::System::Nullable_1<bool> Desc;

  /// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
  constexpr operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*() noexcept;

  /// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject* i___OculusStudios__GraphQL__ClientInterface__IGraphQLInputObject() noexcept;

  /// @brief Method set_By, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_By(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject value);

  /// @brief Method set_Desc, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Desc(::System::Nullable_1<bool> value);

  // Ctor Parameters [CppParam { name: "", ty: "IXOCBeatGamesBeatmapLeaderboardEntryOrder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXOCBeatGamesBeatmapLeaderboardEntryOrder(IXOCBeatGamesBeatmapLeaderboardEntryOrder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20941 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::Main::GraphQL::InputTypes
NEED_NO_BOX(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*, "BeatSaber.Main.GraphQL.InputTypes", "IXOCBeatGamesBeatmapLeaderboardEntryOrder");
