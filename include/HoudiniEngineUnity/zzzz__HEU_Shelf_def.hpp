#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_Shelf)
namespace HoudiniEngineUnity {
class HEU_ShelfToolData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_Shelf;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_Shelf);
// Type: HoudiniEngineUnity::HEU_Shelf
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_Shelf*
class CORDL_TYPE HEU_Shelf : public ::System::Object {
public:
  // Declarations
  /// @brief Field _defaultShelf, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__defaultShelf, put = __cordl_internal_set__defaultShelf)) bool _defaultShelf;

  /// @brief Field _shelfName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__shelfName, put = __cordl_internal_set__shelfName))::StringW _shelfName;

  /// @brief Field _shelfPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__shelfPath, put = __cordl_internal_set__shelfPath))::StringW _shelfPath;

  /// @brief Field _tools, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tools, put = __cordl_internal_set__tools))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>* _tools;

  static inline ::HoudiniEngineUnity::HEU_Shelf* New_ctor();

  constexpr bool const& __cordl_internal_get__defaultShelf() const;

  constexpr bool& __cordl_internal_get__defaultShelf();

  constexpr ::StringW const& __cordl_internal_get__shelfName() const;

  constexpr ::StringW& __cordl_internal_get__shelfName();

  constexpr ::StringW const& __cordl_internal_get__shelfPath() const;

  constexpr ::StringW& __cordl_internal_get__shelfPath();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*& __cordl_internal_get__tools();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*> const& __cordl_internal_get__tools() const;

  constexpr void __cordl_internal_set__defaultShelf(bool value);

  constexpr void __cordl_internal_set__shelfName(::StringW value);

  constexpr void __cordl_internal_set__shelfPath(::StringW value);

  constexpr void __cordl_internal_set__tools(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>* value);

  /// @brief Method .ctor, addr 0x25b45f0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Shelf();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_Shelf", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_Shelf(HEU_Shelf&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Shelf", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_Shelf(HEU_Shelf const&) = delete;

  /// @brief Field _shelfName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____shelfName;

  /// @brief Field _shelfPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____shelfPath;

  /// @brief Field _defaultShelf, offset: 0x20, size: 0x1, def value: None
  bool ____defaultShelf;

  /// @brief Field _tools, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>* ____tools;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Shelf, 0x30>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Shelf, ____shelfName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Shelf, ____shelfPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Shelf, ____defaultShelf) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Shelf, ____tools) == 0x28, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Shelf);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Shelf*, "HoudiniEngineUnity", "HEU_Shelf");
