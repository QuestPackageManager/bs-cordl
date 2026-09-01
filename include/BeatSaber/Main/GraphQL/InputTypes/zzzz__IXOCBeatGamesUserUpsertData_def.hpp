#pragma once
// IWYU pragma private; include "BeatSaber\Main\GraphQL\InputTypes\IXOCBeatGamesUserUpsertData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IXOCBeatGamesUserUpsertData)
namespace BeatSaber::Main::GraphQL::Enums {
struct ISOCountryCode;
}
namespace BeatSaber::Main::GraphQL::Enums {
struct TimezoneIDEnum;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLInputObject;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace BeatSaber::Main::GraphQL::InputTypes {
class IXOCBeatGamesUserUpsertData;
}
// Write type traits
MARK_REF_T(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*, "BeatSaber.Main.GraphQL.InputTypes", "IXOCBeatGamesUserUpsertData");
// Dependencies
namespace BeatSaber::Main::GraphQL::InputTypes {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.InputTypes.IXOCBeatGamesUserUpsertData
class CORDL_TYPE IXOCBeatGamesUserUpsertData {
public:
  // Declarations
  __declspec(property(put = set_ClientMutationId)) ::StringW ClientMutationId;

  __declspec(property(put = set_CountryCode)) ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::ISOCountryCode> CountryCode;

  __declspec(property(put = set_Locale)) ::StringW Locale;

  __declspec(property(put = set_TimezoneId)) ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum> TimezoneId;

  /// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
  constexpr operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*() noexcept;

  /// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject* i___OculusStudios__GraphQL__ClientInterface__IGraphQLInputObject() noexcept;

  /// @brief Method set_ClientMutationId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_ClientMutationId(::StringW value);

  /// @brief Method set_CountryCode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_CountryCode(::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::ISOCountryCode> value);

  /// @brief Method set_Locale, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Locale(::StringW value);

  /// @brief Method set_TimezoneId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_TimezoneId(::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::TimezoneIDEnum> value);

  // Ctor Parameters [CppParam { name: "", ty: "IXOCBeatGamesUserUpsertData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXOCBeatGamesUserUpsertData(IXOCBeatGamesUserUpsertData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20580 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::Main::GraphQL::InputTypes
