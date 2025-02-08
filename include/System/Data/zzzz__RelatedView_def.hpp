#pragma once
// IWYU pragma private; include "System/Data/RelatedView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__DataKey_def.hpp"
#include "System/Data/zzzz__DataView_def.hpp"
#include "System/Data/zzzz__IFilter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RelatedView)
namespace System::Data {
class DataColumn;
}
namespace System::Data {
struct DataKey;
}
namespace System::Data {
struct DataRowVersion;
}
namespace System::Data {
class DataRowView;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
struct DataViewRowState;
}
namespace System::Data {
class IFilter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class RelatedView;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::RelatedView);
// Dependencies System.Data.DataKey, System.Data.DataView, System.Data.IFilter, System.Nullable`1<T>
namespace System::Data {
// Is value type: false
// CS Name: System.Data.RelatedView
class CORDL_TYPE RelatedView : public ::System::Data::DataView {
public:
  // Declarations
  /// @brief Field _childKey, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__childKey, put = __cordl_internal_set__childKey)) ::System::Data::DataKey _childKey;

  /// @brief Field _filterValues, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__filterValues, put = __cordl_internal_set__filterValues)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> _filterValues;

  /// @brief Field _parentKey, offset 0xb8, size 0x10
  __declspec(property(get = __cordl_internal_get__parentKey, put = __cordl_internal_set__parentKey)) ::System::Nullable_1<::System::Data::DataKey> _parentKey;

  /// @brief Field _parentRowView, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__parentRowView, put = __cordl_internal_set__parentRowView)) ::System::Data::DataRowView* _parentRowView;

  /// @brief Convert operator to "::System::Data::IFilter"
  constexpr operator ::System::Data::IFilter*() noexcept;

  /// @brief Method AddNew, addr 0x418a04c, size 0x60, virtual true, abstract: false, final false
  inline ::System::Data::DataRowView* AddNew();

  /// @brief Method GetFilter, addr 0x418a048, size 0x4, virtual true, abstract: false, final false
  inline ::System::Data::IFilter* GetFilter();

  /// @brief Method GetParentValues, addr 0x4189e28, size 0x98, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetParentValues();

  /// @brief Method Invoke, addr 0x4189ec0, size 0x188, virtual true, abstract: false, final true
  inline bool Invoke(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  static inline ::System::Data::RelatedView* New_ctor(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns,
                                                      ::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  static inline ::System::Data::RelatedView* New_ctor(::System::Data::DataRowView* parentRowView, ::System::Data::DataKey parentKey,
                                                      ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> childKeyColumns);

  /// @brief Method SetIndex, addr 0x418a0ac, size 0x24, virtual true, abstract: false, final false
  inline void SetIndex(::StringW newSort, ::System::Data::DataViewRowState newRowStates, ::System::Data::IFilter* newRowFilter);

  constexpr ::System::Data::DataKey const& __cordl_internal_get__childKey() const;

  constexpr ::System::Data::DataKey& __cordl_internal_get__childKey();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__filterValues() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__filterValues();

  constexpr ::System::Nullable_1<::System::Data::DataKey> const& __cordl_internal_get__parentKey() const;

  constexpr ::System::Nullable_1<::System::Data::DataKey>& __cordl_internal_get__parentKey();

  constexpr ::System::Data::DataRowView* const& __cordl_internal_get__parentRowView() const;

  constexpr ::System::Data::DataRowView*& __cordl_internal_get__parentRowView();

  constexpr void __cordl_internal_set__childKey(::System::Data::DataKey value);

  constexpr void __cordl_internal_set__filterValues(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__parentKey(::System::Nullable_1<::System::Data::DataKey> value);

  constexpr void __cordl_internal_set__parentRowView(::System::Data::DataRowView* value);

  /// @brief Method .ctor, addr 0x4189c08, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  /// @brief Method .ctor, addr 0x4189d20, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataRowView* parentRowView, ::System::Data::DataKey parentKey, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> childKeyColumns);

  /// @brief Convert to "::System::Data::IFilter"
  constexpr ::System::Data::IFilter* i___System__Data__IFilter() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RelatedView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RelatedView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RelatedView(RelatedView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RelatedView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RelatedView(RelatedView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11459 };

  /// @brief Field _parentKey, offset: 0xb8, size: 0x10, def value: None
  ::System::Nullable_1<::System::Data::DataKey> ____parentKey;

  /// @brief Field _childKey, offset: 0xc8, size: 0x8, def value: None
  ::System::Data::DataKey ____childKey;

  /// @brief Field _parentRowView, offset: 0xd0, size: 0x8, def value: None
  ::System::Data::DataRowView* ____parentRowView;

  /// @brief Field _filterValues, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____filterValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::RelatedView, ____parentKey) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Data::RelatedView, ____childKey) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Data::RelatedView, ____parentRowView) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Data::RelatedView, ____filterValues) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::RelatedView, 0xe0>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::RelatedView);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::RelatedView*, "System.Data", "RelatedView");
