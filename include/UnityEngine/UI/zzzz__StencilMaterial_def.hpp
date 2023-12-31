#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ColorWriteMask_def.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilOp_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StencilMaterial)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
struct ColorWriteMask;
}
namespace UnityEngine::Rendering {
struct CompareFunction;
}
namespace UnityEngine::Rendering {
struct StencilOp;
}
namespace UnityEngine::UI {
class __StencilMaterial__MatEntry;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UI {
class StencilMaterial;
}
namespace UnityEngine::UI {
class __StencilMaterial__MatEntry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::StencilMaterial);
MARK_REF_PTR_T(::UnityEngine::UI::__StencilMaterial__MatEntry);
// Type: ::MatEntry
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10336)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10334)),
// TypeDefinitionIndex(TypeDefinitionIndex(10335))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13126)) CS Name: ::StencilMaterial::MatEntry*
class CORDL_TYPE __StencilMaterial__MatEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field baseMat, offset 0x10, size 0x8
  __declspec(property(get = __get_baseMat, put = __set_baseMat))::UnityEngine::Material* baseMat;

  /// @brief Field customMat, offset 0x18, size 0x8
  __declspec(property(get = __get_customMat, put = __set_customMat))::UnityEngine::Material* customMat;

  /// @brief Field count, offset 0x20, size 0x4
  __declspec(property(get = __get_count, put = __set_count)) int32_t count;

  /// @brief Field stencilId, offset 0x24, size 0x4
  __declspec(property(get = __get_stencilId, put = __set_stencilId)) int32_t stencilId;

  /// @brief Field operation, offset 0x28, size 0x4
  __declspec(property(get = __get_operation, put = __set_operation))::UnityEngine::Rendering::StencilOp operation;

  /// @brief Field compareFunction, offset 0x2c, size 0x4
  __declspec(property(get = __get_compareFunction, put = __set_compareFunction))::UnityEngine::Rendering::CompareFunction compareFunction;

  /// @brief Field readMask, offset 0x30, size 0x4
  __declspec(property(get = __get_readMask, put = __set_readMask)) int32_t readMask;

  /// @brief Field writeMask, offset 0x34, size 0x4
  __declspec(property(get = __get_writeMask, put = __set_writeMask)) int32_t writeMask;

  /// @brief Field useAlphaClip, offset 0x38, size 0x1
  __declspec(property(get = __get_useAlphaClip, put = __set_useAlphaClip)) bool useAlphaClip;

  /// @brief Field colorMask, offset 0x3c, size 0x4
  __declspec(property(get = __get_colorMask, put = __set_colorMask))::UnityEngine::Rendering::ColorWriteMask colorMask;

  constexpr ::UnityEngine::Material*& __get_baseMat();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get_baseMat() const;

  constexpr void __set_baseMat(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get_customMat();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get_customMat() const;

  constexpr void __set_customMat(::UnityEngine::Material* value);

  constexpr int32_t& __get_count();

  constexpr int32_t const& __get_count() const;

  constexpr void __set_count(int32_t value);

  constexpr int32_t& __get_stencilId();

  constexpr int32_t const& __get_stencilId() const;

  constexpr void __set_stencilId(int32_t value);

  constexpr ::UnityEngine::Rendering::StencilOp& __get_operation();

  constexpr ::UnityEngine::Rendering::StencilOp const& __get_operation() const;

  constexpr void __set_operation(::UnityEngine::Rendering::StencilOp value);

  constexpr ::UnityEngine::Rendering::CompareFunction& __get_compareFunction();

  constexpr ::UnityEngine::Rendering::CompareFunction const& __get_compareFunction() const;

  constexpr void __set_compareFunction(::UnityEngine::Rendering::CompareFunction value);

  constexpr int32_t& __get_readMask();

  constexpr int32_t const& __get_readMask() const;

  constexpr void __set_readMask(int32_t value);

  constexpr int32_t& __get_writeMask();

  constexpr int32_t const& __get_writeMask() const;

  constexpr void __set_writeMask(int32_t value);

  constexpr bool& __get_useAlphaClip();

  constexpr bool const& __get_useAlphaClip() const;

  constexpr void __set_useAlphaClip(bool value);

  constexpr ::UnityEngine::Rendering::ColorWriteMask& __get_colorMask();

  constexpr ::UnityEngine::Rendering::ColorWriteMask const& __get_colorMask() const;

  constexpr void __set_colorMask(::UnityEngine::Rendering::ColorWriteMask value);

  static inline ::UnityEngine::UI::__StencilMaterial__MatEntry* New_ctor();

  /// @brief Method .ctor, addr 0x2d8a7c8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StencilMaterial__MatEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StencilMaterial__MatEntry(__StencilMaterial__MatEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StencilMaterial__MatEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StencilMaterial__MatEntry(__StencilMaterial__MatEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StencilMaterial__MatEntry();

public:
  /// @brief Field baseMat, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Material* ___baseMat;

  /// @brief Field customMat, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Material* ___customMat;

  /// @brief Field count, offset: 0x20, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field stencilId, offset: 0x24, size: 0x4, def value: None
  int32_t ___stencilId;

  /// @brief Field operation, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Rendering::StencilOp ___operation;

  /// @brief Field compareFunction, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::Rendering::CompareFunction ___compareFunction;

  /// @brief Field readMask, offset: 0x30, size: 0x4, def value: None
  int32_t ___readMask;

  /// @brief Field writeMask, offset: 0x34, size: 0x4, def value: None
  int32_t ___writeMask;

  /// @brief Field useAlphaClip, offset: 0x38, size: 0x1, def value: None
  bool ___useAlphaClip;

  /// @brief Field colorMask, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::Rendering::ColorWriteMask ___colorMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__StencilMaterial__MatEntry, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__StencilMaterial__MatEntry, ___baseMat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__StencilMaterial__MatEntry, ___customMat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__StencilMaterial__MatEntry, ___count) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__StencilMaterial__MatEntry, ___stencilId) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__StencilMaterial__MatEntry, ___operation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__StencilMaterial__MatEntry, ___compareFunction) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__StencilMaterial__MatEntry, ___readMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__StencilMaterial__MatEntry, ___writeMask) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__StencilMaterial__MatEntry, ___useAlphaClip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__StencilMaterial__MatEntry, ___colorMask) == 0x3c, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::StencilMaterial
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13127))
// CS Name: ::UnityEngine.UI::StencilMaterial*
class CORDL_TYPE StencilMaterial : public ::System::Object {
public:
  // Declarations
  using MatEntry = ::UnityEngine::UI::__StencilMaterial__MatEntry;

  /// @brief Field m_List, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_List, put = setStaticF_m_List))::System::Collections::Generic::List_1<::UnityEngine::UI::__StencilMaterial__MatEntry*>* m_List;

  static inline void setStaticF_m_List(::System::Collections::Generic::List_1<::UnityEngine::UI::__StencilMaterial__MatEntry*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UI::__StencilMaterial__MatEntry*>* getStaticF_m_List();

  /// @brief Method Add, addr 0x2d89da4, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Material* Add(::UnityEngine::Material* baseMat, int32_t stencilID);

  /// @brief Method Add, addr 0x2d89dac, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Material* Add(::UnityEngine::Material* baseMat, int32_t stencilID, ::UnityEngine::Rendering::StencilOp operation,
                                             ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask);

  /// @brief Method LogWarningWhenNotInBatchmode, addr 0x2d8a750, size 0x78, virtual false, abstract: false, final false
  static inline void LogWarningWhenNotInBatchmode(::StringW warning, ::UnityEngine::Object* context);

  /// @brief Method Add, addr 0x2d89e38, size 0x918, virtual false, abstract: false, final false
  static inline ::UnityEngine::Material* Add(::UnityEngine::Material* baseMat, int32_t stencilID, ::UnityEngine::Rendering::StencilOp operation,
                                             ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask, int32_t readMask, int32_t writeMask);

  /// @brief Method Remove, addr 0x2d8a7d8, size 0x1c0, virtual false, abstract: false, final false
  static inline void Remove(::UnityEngine::Material* customMat);

  /// @brief Method ClearAll, addr 0x2d8a998, size 0x11c, virtual false, abstract: false, final false
  static inline void ClearAll();

  // Ctor Parameters [CppParam { name: "", ty: "StencilMaterial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StencilMaterial(StencilMaterial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StencilMaterial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StencilMaterial(StencilMaterial const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StencilMaterial();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::StencilMaterial, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::StencilMaterial);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::StencilMaterial*, "UnityEngine.UI", "StencilMaterial");
NEED_NO_BOX(::UnityEngine::UI::__StencilMaterial__MatEntry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__StencilMaterial__MatEntry*, "UnityEngine.UI", "StencilMaterial/MatEntry");
