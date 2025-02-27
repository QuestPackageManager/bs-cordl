#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_LoadBufferBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_LoadBufferBase)
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_LoadBufferBase;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_LoadBufferBase);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_LoadBufferBase
class CORDL_TYPE HEU_LoadBufferBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bInstanced, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__bInstanced, put = __cordl_internal_set__bInstanced)) bool _bInstanced;

  /// @brief Field _bInstancer, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__bInstancer, put = __cordl_internal_set__bInstancer)) bool _bInstancer;

  /// @brief Field _generatedOutput, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__generatedOutput, put = __cordl_internal_set__generatedOutput)) ::HoudiniEngineUnity::HEU_GeneratedOutput* _generatedOutput;

  /// @brief Field _id, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) int32_t _id;

  /// @brief Field _name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Method InitializeBuffer, addr 0x3a701a8, size 0x1c, virtual false, abstract: false, final false
  inline void InitializeBuffer(int32_t id, ::StringW name, bool bInstanced, bool bInstancer);

  static inline ::HoudiniEngineUnity::HEU_LoadBufferBase* New_ctor();

  constexpr bool const& __cordl_internal_get__bInstanced() const;

  constexpr bool& __cordl_internal_get__bInstanced();

  constexpr bool const& __cordl_internal_get__bInstancer() const;

  constexpr bool& __cordl_internal_get__bInstancer();

  constexpr ::HoudiniEngineUnity::HEU_GeneratedOutput* const& __cordl_internal_get__generatedOutput() const;

  constexpr ::HoudiniEngineUnity::HEU_GeneratedOutput*& __cordl_internal_get__generatedOutput();

  constexpr int32_t const& __cordl_internal_get__id() const;

  constexpr int32_t& __cordl_internal_get__id();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr void __cordl_internal_set__bInstanced(bool value);

  constexpr void __cordl_internal_set__bInstancer(bool value);

  constexpr void __cordl_internal_set__generatedOutput(::HoudiniEngineUnity::HEU_GeneratedOutput* value);

  constexpr void __cordl_internal_set__id(int32_t value);

  constexpr void __cordl_internal_set__name(::StringW value);

  /// @brief Method .ctor, addr 0x3a701c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_LoadBufferBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_LoadBufferBase(HEU_LoadBufferBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_LoadBufferBase(HEU_LoadBufferBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11791 };

  /// @brief Field _id, offset: 0x10, size: 0x4, def value: None
  int32_t ____id;

  /// @brief Field _name, offset: 0x18, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _bInstanced, offset: 0x20, size: 0x1, def value: None
  bool ____bInstanced;

  /// @brief Field _bInstancer, offset: 0x21, size: 0x1, def value: None
  bool ____bInstancer;

  /// @brief Field _generatedOutput, offset: 0x28, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_GeneratedOutput* ____generatedOutput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferBase, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferBase, ____name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferBase, ____bInstanced) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferBase, ____bInstancer) == 0x21, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferBase, ____generatedOutput) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_LoadBufferBase, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_LoadBufferBase);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_LoadBufferBase*, "HoudiniEngineUnity", "HEU_LoadBufferBase");
