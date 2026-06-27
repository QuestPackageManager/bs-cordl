#pragma once
// IWYU pragma private; include "TMPro/TMP_MaterialReference.hpp"
#include "TMPro/zzzz__TMP_MaterialReference_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }, CppParam { name: "referenceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_MaterialReference::TMP_MaterialReference(::UnityW<::UnityEngine::Material>  material, int32_t  referenceCount) noexcept  {
this->material = material;
this->referenceCount = referenceCount;
}
// Ctor Parameters []
constexpr ::TMPro::TMP_MaterialReference::TMP_MaterialReference()   {
}
