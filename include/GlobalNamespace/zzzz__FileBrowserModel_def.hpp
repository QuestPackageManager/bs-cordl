#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileBrowserModel)
namespace GlobalNamespace {
class FileBrowserItem;
}
namespace GlobalNamespace {
class __FileBrowserModel____c__DisplayClass0_0;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FileBrowserModel;
}
namespace GlobalNamespace {
class __FileBrowserModel____c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FileBrowserModel);
MARK_REF_PTR_T(::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4222))
// CS Name: ::FileBrowserModel::<>c__DisplayClass0_0*
class CORDL_TYPE __FileBrowserModel____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field items, offset 0x10, size 0x8
  __declspec(property(get = __get_items, put = __set_items))::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> items;

  /// @brief Field direcotryPath, offset 0x18, size 0x8
  __declspec(property(get = __get_direcotryPath, put = __set_direcotryPath))::StringW direcotryPath;

  /// @brief Field extensions, offset 0x20, size 0x8
  __declspec(property(get = __get_extensions, put = __set_extensions))::ArrayW<::StringW, ::Array<::StringW>*> extensions;

  /// @brief Field callback, offset 0x28, size 0x8
  __declspec(property(get = __get_callback, put = __set_callback))::System::Action_1<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>>* callback;

  constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>& __get_items();

  constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> const& __get_items() const;

  constexpr void __set_items(::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> value);

  constexpr ::StringW& __get_direcotryPath();

  constexpr ::StringW const& __get_direcotryPath() const;

  constexpr void __set_direcotryPath(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_extensions();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_extensions() const;

  constexpr void __set_extensions(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::System::Action_1<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>>*& __get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>>*> const& __get_callback() const;

  constexpr void __set_callback(::System::Action_1<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>>* value);

  static inline ::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0* New_ctor();

  /// @brief Method .ctor addr 0x21d2518 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetContentOfDirectory>b__0 addr 0x21d2a54 size 0x20 virtual false final false
  inline void _GetContentOfDirectory_b__0();

  /// @brief Method <GetContentOfDirectory>b__1 addr 0x21d2a74 size 0x28 virtual false final false
  inline void _GetContentOfDirectory_b__1();

  // Ctor Parameters [CppParam { name: "", ty: "__FileBrowserModel____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileBrowserModel____c__DisplayClass0_0(__FileBrowserModel____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileBrowserModel____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileBrowserModel____c__DisplayClass0_0(__FileBrowserModel____c__DisplayClass0_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileBrowserModel____c__DisplayClass0_0();

public:
  /// @brief Field items, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> ___items;

  /// @brief Field direcotryPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___direcotryPath;

  /// @brief Field extensions, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___extensions;

  /// @brief Field callback, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0, ___items) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0, ___direcotryPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0, ___extensions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0, ___callback) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FileBrowserModel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4223))
// CS Name: ::FileBrowserModel*
class CORDL_TYPE FileBrowserModel : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0;

  /// @brief Method GetContentOfDirectory addr 0x21d23ec size 0x12c virtual false final false
  static inline void GetContentOfDirectory(::StringW direcotryPath, ::ArrayW<::StringW, ::Array<::StringW>*> extensions,
                                           ::System::Action_1<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>>* callback);

  /// @brief Method GetContentOfDirectory addr 0x21d2520 size 0x4a8 virtual false final false
  static inline ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> GetContentOfDirectory(::StringW directoryPath,
                                                                                                                                   ::ArrayW<::StringW, ::Array<::StringW>*> extensions);

  /// @brief Method CanOpenDirectory addr 0x21d29c8 size 0x8c virtual false final false
  static inline bool CanOpenDirectory(::StringW path);

  // Ctor Parameters [CppParam { name: "", ty: "FileBrowserModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileBrowserModel(FileBrowserModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileBrowserModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileBrowserModel(FileBrowserModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileBrowserModel();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileBrowserModel, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileBrowserModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileBrowserModel*, "", "FileBrowserModel");
NEED_NO_BOX(::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0*, "", "FileBrowserModel/<>c__DisplayClass0_0");
