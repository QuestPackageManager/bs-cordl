#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/InputTypes/XOCBeatGamesBeatmapLeaderboardEntryOrder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XOCBeatGamesBeatmapLeaderboardEntryOrder)
namespace BeatSaber::Main::GraphQL::Enums {
struct XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject;
}
namespace BeatSaber::Main::GraphQL::InputTypes {
class IXOCBeatGamesBeatmapLeaderboardEntryOrder;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLInputObject;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedDictionary_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace BeatSaber::Main::GraphQL::InputTypes {
class XOCBeatGamesBeatmapLeaderboardEntryOrder;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder);
// Dependencies System.Object
namespace BeatSaber::Main::GraphQL::InputTypes {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.InputTypes.XOCBeatGamesBeatmapLeaderboardEntryOrder
class CORDL_TYPE XOCBeatGamesBeatmapLeaderboardEntryOrder : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_By)) ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject By;

  __declspec(property(put = set_Desc)) ::System::Nullable_1<bool> Desc;

  /// @brief Field _params, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__params, put = __cordl_internal_set__params)) ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* _params;

  /// @brief Convert operator to "::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder"
  constexpr operator ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*() noexcept;

  /// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
  constexpr operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*() noexcept;

  /// @brief Method GetParams, addr 0x31cbdc8, size 0xc, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* GetParams();

  static inline ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* New_ctor();

  constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* const& __cordl_internal_get__params() const;

  constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>*& __cordl_internal_get__params();

  constexpr void __cordl_internal_set__params(::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x31cbdd4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder"
  constexpr ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder* i___BeatSaber__Main__GraphQL__InputTypes__IXOCBeatGamesBeatmapLeaderboardEntryOrder() noexcept;

  /// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject* i___OculusStudios__GraphQL__ClientInterface__IGraphQLInputObject() noexcept;

  /// @brief Method set_By, addr 0x31cbc70, size 0xac, virtual true, abstract: false, final true
  inline void set_By(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapLeaderboardEntryOrderBySubject value);

  /// @brief Method set_Desc, addr 0x31cbd1c, size 0xac, virtual true, abstract: false, final true
  inline void set_Desc(::System::Nullable_1<bool> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XOCBeatGamesBeatmapLeaderboardEntryOrder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XOCBeatGamesBeatmapLeaderboardEntryOrder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XOCBeatGamesBeatmapLeaderboardEntryOrder(XOCBeatGamesBeatmapLeaderboardEntryOrder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XOCBeatGamesBeatmapLeaderboardEntryOrder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XOCBeatGamesBeatmapLeaderboardEntryOrder(XOCBeatGamesBeatmapLeaderboardEntryOrder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20944 };

  /// @brief Field _params, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* ____params;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder, ____params) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::InputTypes
NEED_NO_BOX(::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*, "BeatSaber.Main.GraphQL.InputTypes", "XOCBeatGamesBeatmapLeaderboardEntryOrder");
