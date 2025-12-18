#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/InputTypes/XOCBeatGamesUserUpsertData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XOCBeatGamesUserUpsertData)
namespace BeatSaber::Main::GraphQL::Enums {
struct ISOCountryCode;
}
namespace BeatSaber::Main::GraphQL::InputTypes {
class IXOCBeatGamesUserUpsertData;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLInputObject;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLInputSupportsClientMutationId;
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
class XOCBeatGamesUserUpsertData;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData);
// Dependencies System.Object
namespace BeatSaber::Main::GraphQL::InputTypes {
// Is value type: false
// CS Name: BeatSaber.Main.GraphQL.InputTypes.XOCBeatGamesUserUpsertData
class CORDL_TYPE XOCBeatGamesUserUpsertData : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_ClientMutationId)) ::StringW ClientMutationId;

  __declspec(property(put = set_CountryCode)) ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::ISOCountryCode> CountryCode;

  __declspec(property(put = set_Locale)) ::StringW Locale;

  /// @brief Field _params, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__params, put = __cordl_internal_set__params)) ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* _params;

  /// @brief Convert operator to "::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData"
  constexpr operator ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*() noexcept;

  /// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
  constexpr operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*() noexcept;

  /// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId"
  constexpr operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId*() noexcept;

  /// @brief Method GetParams, addr 0x31cc964, size 0xc, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* GetParams();

  static inline ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData* New_ctor();

  constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* const& __cordl_internal_get__params() const;

  constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>*& __cordl_internal_get__params();

  constexpr void __cordl_internal_set__params(::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x31cc970, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData"
  constexpr ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData* i___BeatSaber__Main__GraphQL__InputTypes__IXOCBeatGamesUserUpsertData() noexcept;

  /// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject* i___OculusStudios__GraphQL__ClientInterface__IGraphQLInputObject() noexcept;

  /// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId"
  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId* i___OculusStudios__GraphQL__ClientInterface__IGraphQLInputSupportsClientMutationId() noexcept;

  /// @brief Method set_ClientMutationId, addr 0x31cc7b8, size 0x80, virtual true, abstract: false, final true
  inline void set_ClientMutationId(::StringW value);

  /// @brief Method set_CountryCode, addr 0x31cc838, size 0xac, virtual true, abstract: false, final true
  inline void set_CountryCode(::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::ISOCountryCode> value);

  /// @brief Method set_Locale, addr 0x31cc8e4, size 0x80, virtual true, abstract: false, final true
  inline void set_Locale(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XOCBeatGamesUserUpsertData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XOCBeatGamesUserUpsertData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XOCBeatGamesUserUpsertData(XOCBeatGamesUserUpsertData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XOCBeatGamesUserUpsertData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XOCBeatGamesUserUpsertData(XOCBeatGamesUserUpsertData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20946 };

  /// @brief Field _params, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* ____params;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData, ____params) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::GraphQL::InputTypes
NEED_NO_BOX(::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesUserUpsertData*, "BeatSaber.Main.GraphQL.InputTypes", "XOCBeatGamesUserUpsertData");
