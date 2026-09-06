#pragma once
// IWYU pragma private; include "GlobalNamespace/ILevelPackProductData_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ILevelProductData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ILevelPackProductData_1)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TLevelProductData>
  requires(::cordl_internals::type_constraint<TLevelProductData, ::GlobalNamespace::ILevelProductData*>)
class ILevelPackProductData_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::ILevelPackProductData_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::ILevelPackProductData_1, "", "ILevelPackProductData`1");
// Dependencies ILevelProductData
namespace GlobalNamespace {
// cpp template
template <typename TLevelProductData>
  requires(::cordl_internals::type_constraint<TLevelProductData, ::GlobalNamespace::ILevelProductData*>)
// Is value type: false
// CS Name: ILevelPackProductData`1<TLevelProductData>
class CORDL_TYPE ILevelPackProductData_1 {
public:
  // Declarations
  __declspec(property(get = get_levelPackId)) ::StringW levelPackId;

  __declspec(property(get = get_levelProductsData)) ::System::Collections::Generic::IReadOnlyList_1<TLevelProductData>* levelProductsData;

  /// @brief Method get_levelPackId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_levelPackId();

  /// @brief Method get_levelProductsData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<TLevelProductData>* get_levelProductsData();

  // Ctor Parameters [CppParam { name: "", ty: "ILevelPackProductData_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILevelPackProductData_1(ILevelPackProductData_1const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15127 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
