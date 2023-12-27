#pragma once
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
// Type: HoudiniEngineUnity::HEU_LoadBufferBase
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9804))
// CS Name: ::HoudiniEngineUnity::HEU_LoadBufferBase*
class CORDL_TYPE HEU_LoadBufferBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field _id, offset 0x10, size 0x4
  __declspec(property(get = __get__id, put = __set__id)) int32_t _id;

  /// @brief Field _name, offset 0x18, size 0x8
  __declspec(property(get = __get__name, put = __set__name))::StringW _name;

  /// @brief Field _bInstanced, offset 0x20, size 0x1
  __declspec(property(get = __get__bInstanced, put = __set__bInstanced)) bool _bInstanced;

  /// @brief Field _bInstancer, offset 0x21, size 0x1
  __declspec(property(get = __get__bInstancer, put = __set__bInstancer)) bool _bInstancer;

  /// @brief Field _generatedOutput, offset 0x28, size 0x8
  __declspec(property(get = __get__generatedOutput, put = __set__generatedOutput))::HoudiniEngineUnity::HEU_GeneratedOutput* _generatedOutput;

  constexpr int32_t& __get__id();

  constexpr int32_t const& __get__id() const;

  constexpr void __set__id(int32_t value);

  constexpr ::StringW& __get__name();

  constexpr ::StringW const& __get__name() const;

  constexpr void __set__name(::StringW value);

  constexpr bool& __get__bInstanced();

  constexpr bool const& __get__bInstanced() const;

  constexpr void __set__bInstanced(bool value);

  constexpr bool& __get__bInstancer();

  constexpr bool const& __get__bInstancer() const;

  constexpr void __set__bInstancer(bool value);

  constexpr ::HoudiniEngineUnity::HEU_GeneratedOutput*& __get__generatedOutput();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_GeneratedOutput*> const& __get__generatedOutput() const;

  constexpr void __set__generatedOutput(::HoudiniEngineUnity::HEU_GeneratedOutput* value);

  /// @brief Method InitializeBuffer addr 0x21abbe8 size 0x1c virtual false final false
  inline void InitializeBuffer(int32_t id, ::StringW name, bool bInstanced, bool bInstancer);

  static inline ::HoudiniEngineUnity::HEU_LoadBufferBase* New_ctor();

  /// @brief Method .ctor addr 0x21abc04 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_LoadBufferBase(HEU_LoadBufferBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_LoadBufferBase(HEU_LoadBufferBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_LoadBufferBase();

public:
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
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_LoadBufferBase, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_LoadBufferBase);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_LoadBufferBase*, "HoudiniEngineUnity", "HEU_LoadBufferBase");
