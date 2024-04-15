#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_HAPI_NodeInfo)
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
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
// CS Name: ::HoudiniEngineUnity::Test_HAPI_NodeInfo*
class CORDL_TYPE Test_HAPI_NodeInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x44
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self))::HoudiniEngineUnity::HAPI_NodeInfo self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_NodeInfo*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_NodeInfo*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x24ceae0, size 0x340, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_NodeInfo* other);

  static inline ::HoudiniEngineUnity::Test_HAPI_NodeInfo* New_ctor(::HoudiniEngineUnity::HAPI_NodeInfo self);

  constexpr ::HoudiniEngineUnity::HAPI_NodeInfo const& __cordl_internal_get_self() const;

  constexpr ::HoudiniEngineUnity::HAPI_NodeInfo& __cordl_internal_get_self();

  constexpr void __cordl_internal_set_self(::HoudiniEngineUnity::HAPI_NodeInfo value);

  /// @brief Method .ctor, addr 0x24ceaac, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::HAPI_NodeInfo self);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_NodeInfo*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_NodeInfo*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_HAPI_NodeInfo__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_HAPI_NodeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_NodeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_HAPI_NodeInfo(Test_HAPI_NodeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_NodeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_HAPI_NodeInfo(Test_HAPI_NodeInfo const&) = delete;

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
