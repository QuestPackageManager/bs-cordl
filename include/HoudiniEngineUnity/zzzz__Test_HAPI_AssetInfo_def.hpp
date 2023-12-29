#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_AssetInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_HAPI_AssetInfo)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct HAPI_AssetInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_AssetInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_HAPI_AssetInfo);
// Type: HoudiniEngineUnity::Test_HAPI_AssetInfo
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9658))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9815))
// CS Name: ::HoudiniEngineUnity::Test_HAPI_AssetInfo*
class CORDL_TYPE Test_HAPI_AssetInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x40
  __declspec(property(get = __get_self, put = __set_self))::HoudiniEngineUnity::HAPI_AssetInfo self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>*() noexcept;

  constexpr ::HoudiniEngineUnity::HAPI_AssetInfo& __get_self();

  constexpr ::HoudiniEngineUnity::HAPI_AssetInfo const& __get_self() const;

  constexpr void __set_self(::HoudiniEngineUnity::HAPI_AssetInfo value);

  static inline ::HoudiniEngineUnity::Test_HAPI_AssetInfo* New_ctor(::HoudiniEngineUnity::HAPI_AssetInfo self);

  /// @brief Method .ctor addr 0x2089b24 size 0x34 virtual false final false
  inline void _ctor(::HoudiniEngineUnity::HAPI_AssetInfo self);

  /// @brief Method IsEquivalentTo addr 0x2089b58 size 0x2c0 virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_AssetInfo* other);

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_AssetInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_HAPI_AssetInfo(Test_HAPI_AssetInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_AssetInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_HAPI_AssetInfo(Test_HAPI_AssetInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_HAPI_AssetInfo();

public:
  /// @brief Field self, offset: 0x10, size: 0x40, def value: None
  ::HoudiniEngineUnity::HAPI_AssetInfo ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_HAPI_AssetInfo, 0x50>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_HAPI_AssetInfo, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_AssetInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_AssetInfo*, "HoudiniEngineUnity", "Test_HAPI_AssetInfo");
