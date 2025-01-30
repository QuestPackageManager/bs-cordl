#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon/BasicEventTypesWithKeywords.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BasicEventTypesWithKeywords)
namespace BeatmapSaveDataCommon {
class BasicEventTypesWithKeywords_BasicEventTypesForKeyword;
}
namespace BeatmapSaveDataCommon {
struct BeatmapEventType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatmapSaveDataCommon {
class BasicEventTypesWithKeywords;
}
namespace BeatmapSaveDataCommon {
class BasicEventTypesWithKeywords_BasicEventTypesForKeyword;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords);
MARK_REF_PTR_T(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword);
// Dependencies System.Object
namespace BeatmapSaveDataCommon {
// Is value type: false
// CS Name: BeatmapSaveDataCommon.BasicEventTypesWithKeywords/BasicEventTypesForKeyword
class CORDL_TYPE BasicEventTypesWithKeywords_BasicEventTypesForKeyword : public ::System::Object {
public:
  // Declarations
  /// @brief Field e, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_e, put = __cordl_internal_set_e)) ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* e;

  __declspec(property(get = get_eventTypes)) ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* eventTypes;

  /// @brief Field k, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_k, put = __cordl_internal_set_k)) ::StringW k;

  __declspec(property(get = get_keyword)) ::StringW keyword;

  static inline ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword* New_ctor(::StringW keyword,
                                                                                                         ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* eventTypes);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* const& __cordl_internal_get_e() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*& __cordl_internal_get_e();

  constexpr ::StringW const& __cordl_internal_get_k() const;

  constexpr ::StringW& __cordl_internal_get_k();

  constexpr void __cordl_internal_set_e(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* value);

  constexpr void __cordl_internal_set_k(::StringW value);

  /// @brief Method .ctor, addr 0x2709564, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* eventTypes);

  /// @brief Method get_eventTypes, addr 0x270955c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* get_eventTypes();

  /// @brief Method get_keyword, addr 0x2709554, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_keyword();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicEventTypesWithKeywords_BasicEventTypesForKeyword();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicEventTypesWithKeywords_BasicEventTypesForKeyword", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicEventTypesWithKeywords_BasicEventTypesForKeyword(BasicEventTypesWithKeywords_BasicEventTypesForKeyword&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicEventTypesWithKeywords_BasicEventTypesForKeyword", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicEventTypesWithKeywords_BasicEventTypesForKeyword(BasicEventTypesWithKeywords_BasicEventTypesForKeyword const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13444 };

  /// @brief Field k, offset: 0x10, size: 0x8, def value: None
  ::StringW ___k;

  /// @brief Field e, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* ___e;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword, ___k) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword, ___e) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataCommon
// Dependencies System.Object
namespace BeatmapSaveDataCommon {
// Is value type: false
// CS Name: BeatmapSaveDataCommon.BasicEventTypesWithKeywords
class CORDL_TYPE BasicEventTypesWithKeywords : public ::System::Object {
public:
  // Declarations
  using BasicEventTypesForKeyword = ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword;

  /// @brief Field d, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_d,
                      put = __cordl_internal_set_d)) ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>* d;

  __declspec(property(get = get_data)) ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>* data;

  static inline ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*
  New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>* data);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>* const& __cordl_internal_get_d() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>*& __cordl_internal_get_d();

  constexpr void __cordl_internal_set_d(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>* value);

  /// @brief Method .ctor, addr 0x27075ec, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>* data);

  /// @brief Method get_data, addr 0x270954c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>* get_data();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicEventTypesWithKeywords();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicEventTypesWithKeywords", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicEventTypesWithKeywords(BasicEventTypesWithKeywords&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicEventTypesWithKeywords", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicEventTypesWithKeywords(BasicEventTypesWithKeywords const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13445 };

  /// @brief Field d, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>* ___d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords, ___d) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords, 0x18>, "Size mismatch!");

} // namespace BeatmapSaveDataCommon
NEED_NO_BOX(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*, "BeatmapSaveDataCommon", "BasicEventTypesWithKeywords");
NEED_NO_BOX(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*, "BeatmapSaveDataCommon", "BasicEventTypesWithKeywords/BasicEventTypesForKeyword");
