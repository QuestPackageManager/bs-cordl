#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_HAPI_NodeInfo)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_NodeInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_HAPI_NodeInfo);
// Type: HoudiniEngineUnity::Test_HAPI_NodeInfo
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9660))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9817))
// CS Name: ::HoudiniEngineUnity::Test_HAPI_NodeInfo*
class CORDL_TYPE Test_HAPI_NodeInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x44
  __declspec(property(get = __get_self, put = __set_self))::HoudiniEngineUnity::HAPI_NodeInfo self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_NodeInfo*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_NodeInfo*>*() noexcept;

  constexpr ::HoudiniEngineUnity::HAPI_NodeInfo& __get_self();

  constexpr ::HoudiniEngineUnity::HAPI_NodeInfo const& __get_self() const;

  constexpr void __set_self(::HoudiniEngineUnity::HAPI_NodeInfo value);

  static inline ::HoudiniEngineUnity::Test_HAPI_NodeInfo* New_ctor(::HoudiniEngineUnity::HAPI_NodeInfo self);

  /// @brief Method .ctor addr 0x2089ea0 size 0x34 virtual false final false
  inline void _ctor(::HoudiniEngineUnity::HAPI_NodeInfo self);

  /// @brief Method IsEquivalentTo addr 0x2089ed4 size 0x340 virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_NodeInfo* other);

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_NodeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_HAPI_NodeInfo(Test_HAPI_NodeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_NodeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_HAPI_NodeInfo(Test_HAPI_NodeInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_HAPI_NodeInfo();

public:
  /// @brief Field self, offset: 0x10, size: 0x44, def value: None
  ::HoudiniEngineUnity::HAPI_NodeInfo ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_HAPI_NodeInfo, 0x58>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_HAPI_NodeInfo, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_NodeInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_NodeInfo*, "HoudiniEngineUnity", "Test_HAPI_NodeInfo");
