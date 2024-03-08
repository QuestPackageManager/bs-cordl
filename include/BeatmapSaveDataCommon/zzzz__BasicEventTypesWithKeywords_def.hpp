#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BasicEventTypesWithKeywords)
namespace BeatmapSaveDataCommon {
struct BeatmapEventType;
}
namespace BeatmapSaveDataCommon {
class __BasicEventTypesWithKeywords__BasicEventTypesForKeyword;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatmapSaveDataCommon {
class BasicEventTypesWithKeywords;
}
namespace BeatmapSaveDataCommon {
class __BasicEventTypesWithKeywords__BasicEventTypesForKeyword;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords);
MARK_REF_PTR_T(::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword);
// Type: ::BasicEventTypesForKeyword
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataCommon {
// Is value type: false
// CS Name: ::BasicEventTypesWithKeywords::BasicEventTypesForKeyword*
class CORDL_TYPE __BasicEventTypesWithKeywords__BasicEventTypesForKeyword : public ::System::Object {
public:
  // Declarations
  /// @brief Field e, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_e, put = __cordl_internal_set_e))::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* e;

  __declspec(property(get = get_eventTypes))::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* eventTypes;

  /// @brief Field k, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_k, put = __cordl_internal_set_k))::StringW k;

  __declspec(property(get = get_keyword))::StringW keyword;

  static inline ::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*
  New_ctor(::StringW keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* eventTypes);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*& __cordl_internal_get_e();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*> const& __cordl_internal_get_e() const;

  constexpr ::StringW const& __cordl_internal_get_k() const;

  constexpr ::StringW& __cordl_internal_get_k();

  constexpr void __cordl_internal_set_e(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* value);

  constexpr void __cordl_internal_set_k(::StringW value);

  /// @brief Method .ctor, addr 0x13261e4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* eventTypes);

  /// @brief Method get_eventTypes, addr 0x13261dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* get_eventTypes();

  /// @brief Method get_keyword, addr 0x13261d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_keyword();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BasicEventTypesWithKeywords__BasicEventTypesForKeyword();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BasicEventTypesWithKeywords__BasicEventTypesForKeyword", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BasicEventTypesWithKeywords__BasicEventTypesForKeyword(__BasicEventTypesWithKeywords__BasicEventTypesForKeyword&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BasicEventTypesWithKeywords__BasicEventTypesForKeyword", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BasicEventTypesWithKeywords__BasicEventTypesForKeyword(__BasicEventTypesWithKeywords__BasicEventTypesForKeyword const&) = delete;

  /// @brief Field k, offset: 0x10, size: 0x8, def value: None
  ::StringW ___k;

  /// @brief Field e, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* ___e;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword, ___k) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword, ___e) == 0x18, "Offset mismatch!");

} // namespace BeatmapSaveDataCommon
// Type: BeatmapSaveDataCommon::BasicEventTypesWithKeywords
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataCommon {
// Is value type: false
// CS Name: ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*
class CORDL_TYPE BasicEventTypesWithKeywords : public ::System::Object {
public:
  // Declarations
  using BasicEventTypesForKeyword = ::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword;

  /// @brief Field d, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_d,
                      put = __cordl_internal_set_d))::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* d;

  __declspec(property(get = get_data))::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* data;

  static inline ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*
  New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* data);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*& __cordl_internal_get_d();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*> const&
  __cordl_internal_get_d() const;

  constexpr void __cordl_internal_set_d(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* value);

  /// @brief Method .ctor, addr 0x13261ac, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* data);

  /// @brief Method get_data, addr 0x13261a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* get_data();

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

  /// @brief Field d, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* ___d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords, ___d) == 0x10, "Offset mismatch!");

} // namespace BeatmapSaveDataCommon
NEED_NO_BOX(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*, "BeatmapSaveDataCommon", "BasicEventTypesWithKeywords");
NEED_NO_BOX(::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*, "BeatmapSaveDataCommon", "BasicEventTypesWithKeywords/BasicEventTypesForKeyword");
