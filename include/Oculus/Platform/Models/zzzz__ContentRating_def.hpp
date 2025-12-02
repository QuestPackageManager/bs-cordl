#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/ContentRating.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ContentRating)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class ContentRating;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::ContentRating);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.ContentRating
class CORDL_TYPE ContentRating : public ::System::Object {
public:
  // Declarations
  /// @brief Field AgeRatingImageUri, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_AgeRatingImageUri, put = __cordl_internal_set_AgeRatingImageUri)) ::StringW AgeRatingImageUri;

  /// @brief Field AgeRatingText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_AgeRatingText, put = __cordl_internal_set_AgeRatingText)) ::StringW AgeRatingText;

  /// @brief Field Descriptors, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Descriptors, put = __cordl_internal_set_Descriptors)) ::ArrayW<::StringW, ::Array<::StringW>*> Descriptors;

  /// @brief Field InteractiveElements, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_InteractiveElements, put = __cordl_internal_set_InteractiveElements)) ::ArrayW<::StringW, ::Array<::StringW>*> InteractiveElements;

  /// @brief Field RatingDefinitionUri, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_RatingDefinitionUri, put = __cordl_internal_set_RatingDefinitionUri)) ::StringW RatingDefinitionUri;

  static inline ::Oculus::Platform::Models::ContentRating* New_ctor(::System::IntPtr o);

  constexpr ::StringW const& __cordl_internal_get_AgeRatingImageUri() const;

  constexpr ::StringW& __cordl_internal_get_AgeRatingImageUri();

  constexpr ::StringW const& __cordl_internal_get_AgeRatingText() const;

  constexpr ::StringW& __cordl_internal_get_AgeRatingText();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_Descriptors() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_Descriptors();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_InteractiveElements() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_InteractiveElements();

  constexpr ::StringW const& __cordl_internal_get_RatingDefinitionUri() const;

  constexpr ::StringW& __cordl_internal_get_RatingDefinitionUri();

  constexpr void __cordl_internal_set_AgeRatingImageUri(::StringW value);

  constexpr void __cordl_internal_set_AgeRatingText(::StringW value);

  constexpr void __cordl_internal_set_Descriptors(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_InteractiveElements(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_RatingDefinitionUri(::StringW value);

  /// @brief Method .ctor, addr 0x5bda0c4, size 0x1d8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentRating();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentRating", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentRating(ContentRating&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentRating", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentRating(ContentRating const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17988 };

  /// @brief Field AgeRatingImageUri, offset: 0x10, size: 0x8, def value: None
  ::StringW ___AgeRatingImageUri;

  /// @brief Field AgeRatingText, offset: 0x18, size: 0x8, def value: None
  ::StringW ___AgeRatingText;

  /// @brief Field Descriptors, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___Descriptors;

  /// @brief Field InteractiveElements, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___InteractiveElements;

  /// @brief Field RatingDefinitionUri, offset: 0x30, size: 0x8, def value: None
  ::StringW ___RatingDefinitionUri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::ContentRating, ___AgeRatingImageUri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ContentRating, ___AgeRatingText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ContentRating, ___Descriptors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ContentRating, ___InteractiveElements) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ContentRating, ___RatingDefinitionUri) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::ContentRating, 0x38>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::ContentRating);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ContentRating*, "Oculus.Platform.Models", "ContentRating");
